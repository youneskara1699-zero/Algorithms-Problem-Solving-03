#include <iostream>

using namespace std;

int ReadNumber()
{
    int Number;
    cout << "Enter Number: ";
    cin >> Number;

    return Number;
}
    
   
void PrintNumberFactors( int Number)
{
    cout << "Factors of Number" << Number << ": ";

    for (int i = 1; i <= Number ; i++)
    {
        if (Number % i == 0)
        {
            cout << i << " ";
        }
    }
}

int main()
{
    PrintNumberFactors(ReadNumber());

    return 0; 
}    