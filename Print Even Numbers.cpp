#include <iostream>

using namespace std;


void PrintEvenNumbers()
{
    int Number = 100; 
  
    cout << "Even Numbers between 1 and 100: " << endl;

    for (int i = 1; i <= 100; i++)
    {
        if (i % 2 == 0)
        {
            cout << i << endl;
        }
    }
}

int main()
{

    PrintEvenNumbers();

    return 0; 
}    
