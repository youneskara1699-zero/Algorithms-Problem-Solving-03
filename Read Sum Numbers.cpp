#include <iostream>

using namespace std;

int ReadNumber()
{
    int Number;
    cout << "Enter Number: ";
    cin >> Number;

    return Number;
}


void PrintSumNumbers()
{
    int Number, Sum = 0;
    do
    {
       Number =  ReadNumber();
       Sum += Number;
       if (Number == -1)
       {
           Sum += 1;
       }
       
    } while (Number != -1);
    
    cout << Sum;
}

int main()
{


    PrintSumNumbers();

    return 0; 
}    