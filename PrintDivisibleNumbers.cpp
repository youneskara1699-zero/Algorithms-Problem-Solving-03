#include <iostream>

using namespace std;

int ReadNumber(string Message)
{
    int Number;
    cout << Message;
    cin >> Number;
    return Number;
}

void PrintdivisibleNumbers()
{
    int From = ReadNumber("Enter From Number: "); 
    int To = ReadNumber("Enter To Number: ");

    while (To <= From)
    {
          cout << "Enter a Number greater than "<< From << ": " << endl;
          To = ReadNumber("Enter To Number: ");
    }
    
    cout << "Numbers divisible by 5 between "<< From << "and " << To <<": " << endl;

    for (int i = From; i <= To; i++)
    {
        if (i % 5 == 0)
        {
            cout << i << endl;
        }
    }
}

int main()
{
    cout << "================================" << endl;
    cout << "                        " << endl;  
    cout << "================================" << endl;

    PrintdivisibleNumbers();

    return 0; 
}    
