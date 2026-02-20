#include <iostream>

using namespace std;

int ReadNumber()
{
    int Number;
    cout << "Enter Number: ";
    cin >> Number;

    return Number;
}

void DevideIntegers(int Number)
{
    int Digit;

    while (Number != 0)
    {
        Digit = Number % 10;
        cout << Digit << endl;
        Number /= 10; 
    }
    
}

int main()
{
    int Number = ReadNumber();
    
    DevideIntegers(Number);

    return 0; 
}    