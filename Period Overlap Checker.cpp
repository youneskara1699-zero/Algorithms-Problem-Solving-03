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


int main()
{ 
    cout << "================================" << endl;
    cout << "  Period Overlap Checker        " << endl;  
    cout << "================================" << endl;
    
  
    cout << "Enter Period 1: " << endl;
    stPeriod Period1 = ReadFullPeriod(); 

    cout << "Enter Period 2: " << endl;
    stPeriod Period2 = ReadFullPeriod(); 

    if (IsOverlapsPeriod(Period1, Period2))
        cout << "\nYes, Periods Overlap\n";
    else        
        cout << "\nNo, Periods do not Overlap\n";


   return 0;
} 