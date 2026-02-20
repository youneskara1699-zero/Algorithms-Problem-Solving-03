#include <iostream>

using namespace std;

int ReadNumber()
{
    int Number;
    cout << "Enter Number: ";
    cin >> Number;

    return Number;
}

void PrintMultiplicationTable()
{
    int Number = ReadNumber(); 
  
    cout << "Multiplication Table of "<< Number <<":" << endl;

    for (int i = 1; i <= 10; i++)
    {
        printf("\n%d * %d = %d",Number, i, Number*i);
    }
}

int main()
{

    PrintMultiplicationTable();

    return 0; 
}    