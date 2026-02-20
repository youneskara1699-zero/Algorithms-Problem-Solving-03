#include <iostream>

using namespace std;

int ReadNumber()
{
    int Number;
    cout << "Enter Number: ";
    cin >> Number;

    return Number;
}

int ReverseNumber(int Number)
{
    int Reverse = 0, Digit;
    int Temp = Number;
    
    cout << "The Integer is: " << Number << endl; 

    while (Temp != 0)
    {
        Digit = Temp % 10;
        Reverse = Reverse * 10 + Digit;
        Temp =Temp /10;
    }
    
    cout << "The Reverse Integer is: " << Reverse << endl;

    return Reverse;
}

bool IsPalindromeNumber(int Number)
{
    if (Number < 0)
    {
       return false;
    }

    return ReverseNumber(Number) == Number;
}


int main()
{
    int Number = ReadNumber();

    if (IsPalindromeNumber(Number))
       cout << Number << " is Palindrome Number" << endl;
    else 
       cout << Number << " is NOT Palindrome Number" << endl;
    

    return 0; 
}    