#include <iostream>

using namespace std;

int ReadNumber()
{
    int Number;
    cout << "Enter Number: ";
    cin >> Number;

    return Number;
}


void PrintOddNumbers()
{
    int Number = ReadNumber(); 
  
    cout <<" Odd Numbers between 1 and " << Number << ": " << endl;

    for (int i = 1; i <= Number; i++)
    {
        if (i % 2 != 0)
        {
            cout << i << endl;
        }
    }
}

int main()
{


    PrintOddNumbers();

    return 0; 
}    