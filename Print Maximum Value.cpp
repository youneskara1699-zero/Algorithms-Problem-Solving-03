#include <iostream>

using namespace std;

int ReadNumber()
{
    int Number;
    cout << "Enter Number: ";
    cin >> Number;

    return Number;
}

void PrintMaxValue(int Number)
{
   int Max = 0;
   
   for (int i = 0; i < Number; i++)
   {
        int Number = ReadNumber();

        if (Number > Max)
        {
            Max = Number;
        } 
   }
   
   cout << "Max is: " << Max << endl; 
}

int main()
{
    int N = ReadNumber();
    PrintMaxValue(N);

    return 0; 
}    