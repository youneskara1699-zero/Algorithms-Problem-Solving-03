#include <iostream>

using namespace std;

int ReadNumber()
{
    int Number;
    cout << "Enter Number: ";
    cin >> Number;

    return Number;
}

void PrintFirstNFibonacciNumbers( int Number)
{
    int Number1 = 0, Number2 = 1, Result;
    
    cout << "First " << Number << " Fibonacci Numbers: " << endl; 

    for (int i = 0; i < Number; i++)
    {
        Result = Number1 + Number2;
        Number1 = Number2;
        Number2 = Result;

        cout << Result << endl;
    }
    
   
    
}

int main()
{
    PrintFirstNFibonacciNumbers(ReadNumber());

    return 0; 
}    