#include <iostream>

using namespace std;

int ReadNumber()
{
    int Number;
    cout << "Enter Number: ";
    cin >> Number;

    return Number;
}

void SmallestAndLargestDigit(int Number)
{
    int Reverse = 0, Digit, Min = 9, Max = 0;
    int Temp = Number;
    
    cout << "The Number is: " << Number << endl; 

    while (Temp != 0)
    {
        Digit = Temp % 10;
       
        if (Min > Digit)
        {
           Min = Digit;
        }

        if (Max < Digit)
        {
            Max = Digit; 
        }
        
        Temp =Temp /10;
        
    }
    
    cout << "The Smallest Digit is: " << Min << endl;
    cout << "The Largest Digit is: " << Max << endl;
    
}

int main()
{
   SmallestAndLargestDigit(ReadNumber());
    

    return 0; 
}    