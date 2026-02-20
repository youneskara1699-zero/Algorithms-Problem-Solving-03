#include <iostream>

using namespace std;

int ReadNumber(string Message)
{
    int Number;
    cout << Message;
    cin >> Number;

    return Number;
}

void PrintNumbers()
{
    int Number =  ReadNumber("Enter Number: "); 
    
    while (Number < 1)
    {
        cout <<  "Please, Enter again: ";
        Number =  ReadNumber("Enter Number: "); 
    }
  
    for (int i = 0; i < Number; i++)
    {
        cout << i+1 << endl;
    }
}

int main()
{
    cout << "================================" << endl;
    cout << "                        " << endl;  
    cout << "================================" << endl;

    PrintNumbers();

    return 0; 
}    
