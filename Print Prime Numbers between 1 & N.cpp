#include <iostream>

using namespace std;

int ReadNumber()
{
    int Number;
    cout << "Enter Number: ";
    cin >> Number;

    return Number;
}

bool IsPrimeNumber(int Number)
{

    if (Number <= 1)
       return false;

    for (int i = 2; i <= Number/2; i++)
    {
        if (Number % i == 0)
        return false;
    }
      
    return true;
}

void PrintPrimeNumbers(int Number)
{
    for (int j = 1; j <= Number; j++)
    {
        if (IsPrimeNumber(j))
        {
            cout << j << endl;
        }
        
    }
    
    
}

int main()
{
    int Number = ReadNumber();
    PrintPrimeNumbers(Number);

    return 0; 
}    