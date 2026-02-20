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
    do
    {
        cout << "Please, Enter a month to check: "; 
        cin >> Month;

    } while (Month < 1 || Month > 12);
    
    return Month; 
}    

bool IsLeapYear(int Year)
{
    return ((Year % 400 == 0) || (Year % 4 == 0 && Year % 100 != 0));
}  

int NumberOfDays(int Month, int Year)
{ 
    int NumberOfDays[12] = { 31,28,31,30,31,30,31,31,30,31,30,31 };
    return (Month == 2)? (IsLeapYear(Year)? 29 : 28) : NumberOfDays[Month-1];
}

int NumberOfHours(int Month, int Year)
{
    return NumberOfDays(Month, Year) * 24;
}

int NumberOfMinutes(int Month, int Year)
{
    return NumberOfHours(Month, Year) * 60;
}

int NumberOfSeconds(int Month, int Year)
{
    return NumberOfMinutes(Month, Year) * 60;
}

int main()
{
    cout << "================================" << endl;
    cout << "Optimized Month Time Calculator " << endl;  
    cout << "================================" << endl;
    
    int Year = ReadYear(); 
    int Month = ReadMonth();

    cout << endl;

    cout << "Number of Days     in Month [" << Month <<"] is:" << NumberOfDays(Month, Year) << endl;  
    cout << "Number of Hours    in Month [" << Month <<"] is:" << NumberOfHours(Month, Year) << endl;
    cout << "Number of Minutes  in Month [" << Month <<"] is:" << NumberOfMinutes(Month, Year) << endl;
    cout << "Number of Seconds  in Month [" << Month <<"] is:" << NumberOfSeconds(Month, Year) << endl;

     return 0; 
}    