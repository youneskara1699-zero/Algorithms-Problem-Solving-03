#include <iostream>
#include <cstdlib>
#include <ctime>
#include <string>
#include <vector>
#include <fstream> 
#include <iomanip> 
using namespace std;

int ReadYear()
{
    int Year; 
    cout << "Please, Enter a year to check: "; 
    cin >> Year;
    return Year; 
}    

int ReadMonth()
{
    int Month; 
    cout << "Please, Enter a month (1-12): "; 
    cin >> Month;
    return Month; 
}    

bool isLeapYear(int Year) 
{ 
     return (Year % 4 == 0 && Year % 100 != 0) || (Year % 400 == 0); 
}

int findDayOrder(int Day, int Month, int Year)
{
    // Zeller's congruence algorithm (returns 0=Saturday, 1=Sunday, ..., 6=Friday)
    if (Month < 3) {
        Month += 12;
        Year--;
    }
    int Century = Year / 100;
    int YearInCentury = Year % 100;
    
    int h = (Day + (13*(Month+1))/5 + YearInCentury + YearInCentury/4 + Century/4 + 5*Century) % 7;
    
    // Convert to 0=Sunday, 1=Monday, ..., 6=Saturday
    return (h + 6) % 7;
}    

short NumberOfDaysInAMonth(int Month, int Year) 
{ 
    if (Month < 1 || Month > 12) 
        return 0; 
    
    int days[12] = { 31,28,31,30,31,30,31,31,30,31,30,31 };
    return (Month == 2) ? (isLeapYear(Year) ? 29 : 28) : days[Month - 1]; 
}

string FindMonthName(int Month)
{
    string Months[12] = {"Jan", "Feb", "Mar", "Apr", "May", "Jun", "Jul", "Aug", "Sep", "Oct", "Nov", "Dec"};
    return Months[Month-1];
}    

void PrintMonthCalender(int Month, int Year)
{
    int StartDay = findDayOrder(1, Month, Year); // 0=Sunday, 1=Monday, etc.
    int NumberOfDays = NumberOfDaysInAMonth(Month, Year); 
    
    printf("\n  _______________%s_______________\n\n", FindMonthName(Month).c_str()); 
    printf("  Sun  Mon  Tue  Wed  Thu  Fri  Sat\n");
    
    // Print leading spaces
    for (int i = 0; i < StartDay; i++)
    {
        printf("     ");
    }
    
    // Print days
    for (int day = 1; day <= NumberOfDays; day++)
    {
        printf("%5d", day);
        
        // New line after Saturday
        if ((StartDay + day) % 7 == 0)
        {
            printf("\n");
        }
    }
    
    printf("\n  ________________________________\n\n");
}    

int main()
{
    cout << "================================" << endl;
    cout << "     Month Calendar              " << endl;  
    cout << "================================" << endl;
    cout << endl;  

    int Month = ReadMonth();
    int Year = ReadYear();
    
    // Validate month input
    if (Month < 1 || Month > 12) {
        cout << "Invalid month! Please enter 1-12." << endl;
        return 1;
    }
    
    PrintMonthCalender(Month, Year);
    return 0; 
}