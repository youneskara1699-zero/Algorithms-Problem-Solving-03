#include <iostream>

using namespace std;

void PrintPyramidPattern()
{
    for (int i = 1; i <= 6; i++)
    {
        for (int j = 1; j <= (6-i); j++)
        {
            cout << "   ";
        }
        
        for (int j = 1; j <= (2*i-1); j++)
        {
            cout << " * ";
        }
         cout << endl;
    }
    
}

int main()
{
    PrintPyramidPattern();

    return 0; 
}    