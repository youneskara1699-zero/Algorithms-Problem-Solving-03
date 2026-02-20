#include<iostream>
using namespace std; 

struct stDate
{ 
    short Year; 
    short Month; 
    short Day; 
}; 

struct stPeriod
{ 
    stDate StartDate;
    stDate EndDate;
}; 

short ReadDay() 
{ 
    short Day;     
    cout << "\nPlease enter a Day? ";     
    cin >> Day; 
    return Day; 
} 
short ReadMonth() 
{ 
    short Month;    
    cout << "Please enter a Month? ";    
    cin >> Month; 
    return Month; 
} 
short ReadYear() 
{ 
    short Year;     
    cout << "Please enter a Year? ";     
    cin >> Year; 
    return Year; 
} 

stDate ReadFullDate() 
{ 
    stDate Date;     
    Date.Day = ReadDay();    
    Date.Month = ReadMonth();     
    Date.Year = ReadYear(); 
    return Date; 
} 

stPeriod ReadFullPeriod() 
{ 
    stPeriod Period;  
  
    cout << "\nEnter Start Date: " << endl; 
    Period.StartDate = ReadFullDate();  

    cout << "\nEnter End Date: " << endl;  
    Period.EndDate = ReadFullDate();

    return Period; 
} 

bool isLeapYear(int Year) 
{ 
     return (Year % 4 == 0 && Year % 100 != 0) || (Year % 400 == 0); 
}

short NumberOfDaysInAMonth(int Month, int Year) 
{ 
    if (Month < 1 || Month>12) 
    return  0; 
    int days[12] = { 31,28,31,30,31,30,31,31,30,31,30,31 };
     return (Month == 2) ? (isLeapYear(Year) ? 29 : 28) : days[Month - 1]; 
}

bool IsLastDayInMonth(stDate Date)
{
    return (Date.Day == NumberOfDaysInAMonth(Date.Month, Date.Year));
}    

bool IsLastMonthInYear(stDate Date)
{
     return (Date.Month == 12);
}    

stDate IncreaseDateByOneDay(stDate Date)
{
    if (IsLastDayInMonth(Date))
    {  
        if (IsLastMonthInYear(Date))
        {
            Date.Day = 1;
            Date.Month = 1;
            Date.Year ++;
        } 
        
        else
        {
        Date.Day = 1;
        Date.Month ++;
        }
    }

    else
    {
        Date.Day ++; 
    }

    return Date;
}  

bool IsDate1BeforeDate2(stDate Date1, stDate Date2) 
{
     return  (Date1.Year < Date2.Year) ? true : 
     ((Date1.Year == Date2.Year) ? (Date1.Month < Date2.Month ? true : 
    (Date1.Month == Date2.Month ? Date1.Day < Date2.Day : false)) : false); 
}

int GetDifferenceInDays(stDate Date1, stDate Date2, bool IncludeEndDay = false)
{
      int Days = 0;
      while (IsDate1BeforeDate2(Date1, Date2))
      {
         Days++;
         Date1 = IncreaseDateByOneDay(Date1);
      }
       
      return IncludeEndDay ? ++Days : Days;
}   

int PeriodLengthInDays(stPeriod Period, bool IncludeEndDay = false) 
{ 
    return GetDifferenceInDays(Period.StartDate, Period.EndDate, IncludeEndDay); 
}



int main()
{ 
    cout << "================================" << endl;
    cout << "                        " << endl;  
    cout << "================================" << endl;
    
  
    cout << "Enter Period 1: " << endl;
    stPeriod Period1 = ReadFullPeriod(); 

    cout << "\nPeriod Length is: " << PeriodLengthInDays(Period1) << endl;
    cout << "Period Length (Including End Date) is: " << PeriodLengthInDays(Period1, true) << endl;

   return 0;
} 










