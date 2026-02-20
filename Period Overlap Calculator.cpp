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

bool isLeapYear(short Year) 
{ 
    return (Year % 4 == 0 && Year % 100 != 0) || (Year % 400 == 0); 
} 

short NumberOfDaysInAMonth(short Month, short Year) 
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
bool IsLastMonthInYear(short Month) 
{ 
    return (Month == 12); 
} 

stDate IncreaseDateByOneDay(stDate Date) 
{ 
    if (IsLastDayInMonth(Date))     
    { 
        if (IsLastMonthInYear(Date.Month))         
        { 
            Date.Month = 1; 
            Date.Day = 1; 
            Date.Year++;         
        } 

        else        
        { 
            Date.Day = 1; 
            Date.Month++;         
        }     
    } 
     
    else    
    { 
        Date.Day++;     
    } 
    
    return Date; 
}

bool IsDate1BeforeDate2(stDate Date1, stDate Date2) 
{
     return  (Date1.Year < Date2.Year) ? true : 
     ((Date1.Year == Date2.Year) ? (Date1.Month < Date2.Month ? true : 
    (Date1.Month == Date2.Month ? Date1.Day < Date2.Day : false)) : false); 
}

bool IsDate1EqualDate2(stDate Date1, stDate Date2) 
{
     return   (Date1.Year == Date2.Year) && (Date1.Month == Date2.Month ) && (Date1.Day == Date2.Day ); 
}

bool IsDate1AfterDate2(stDate Date1, stDate Date2) 
{
     return  (!IsDate1EqualDate2(Date1, Date2) && !IsDate1BeforeDate2(Date1, Date2)); 
}

enum enCompareResult { Before = -1 , Equal = 0, After = 1 };

enCompareResult CompareDates(stDate Date1, stDate Date2)
{

    if (IsDate1AfterDate2(Date1, Date2))
      return enCompareResult::After;
    
    if (IsDate1BeforeDate2(Date1, Date2))
       return enCompareResult::Before;
    
    return enCompareResult::Equal;
}

bool IsOverlapsPeriod( stPeriod Period1, stPeriod Period2)
{

    if ((CompareDates(Period2.EndDate, Period1.StartDate) == enCompareResult::Before) 
    ||
    (CompareDates(Period2.StartDate, Period1.EndDate) == enCompareResult::After))
       return false;
    
    else 
       return true;
}

bool IsDateInPeriod( stDate Date, stPeriod Period)
{
    return  !((CompareDates(Date, Period.StartDate) == enCompareResult::Before) 
               ||
              (CompareDates(Date, Period.EndDate) == enCompareResult::After));
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

int PeriodLengthInDays(stPeriod Period, bool IncludeEndDate = false) 
{ 
    return GetDifferenceInDays(Period.StartDate, Period.EndDate, IncludeEndDate); 
}
int CountOverlapDays( stPeriod Period1, stPeriod Period2)
{
    int Period1Length = PeriodLengthInDays(Period1, true);
    int Period2Length = PeriodLengthInDays(Period2, true);
    int CountOverlapDays = 0;

    if (!IsOverlapsPeriod(Period1, Period2))
        return 0;

    
    
    if (Period1Length < Period2Length)
    {
        while (IsDate1BeforeDate2(Period1.StartDate, Period1.EndDate))
        {
               if (IsDateInPeriod(Period1.StartDate, Period2))
                   CountOverlapDays++;


            Period1.StartDate = IncreaseDateByOneDay(Period1.StartDate);
        }
    }
    
    else
    {
        while (IsDate1BeforeDate2(Period2.StartDate, Period2.EndDate))
        {
               if (IsDateInPeriod(Period2.StartDate, Period1))
                   CountOverlapDays++;


            Period2.StartDate = IncreaseDateByOneDay(Period2.StartDate);
        }     
    }

    return CountOverlapDays;
} 

int main()
{ 
    cout << "================================" << endl;
    cout << "    Period Overlap Calculator   " << endl;  
    cout << "================================" << endl;
    
  
    cout << "\nEnter Period 1: " << endl;
    stPeriod Period1 = ReadFullPeriod(); 

    cout << "\nEnter Period 2: " << endl;
    stPeriod Period2 = ReadFullPeriod(); 
     
    cout << "\nOverlap Days Count is: " << CountOverlapDays(Period1, Period2);
   

   return 0;
} 