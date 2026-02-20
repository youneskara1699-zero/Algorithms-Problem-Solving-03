#include <iostream>

using namespace std;

int ReadNumber()
{
    int Number;
    cout << "Enter Number: ";
    cin >> Number;

    return Number;
}


bool IsPrime(int Number)
{
    if (Number <= 1)
    {
        return false;
    }
    
    for (int i = 2; i <= Number/2; i++)
    {
        if (Number % i == 0)
            return false;
    }
    
    return true;
}

int main()
{
    int Number = ReadNumber();

    if (IsPrime(Number))
        cout << Number << " is prime number" << endl;
    else
        cout << Number << " is NOT prime number" << endl;
    

    return 0; 
}    