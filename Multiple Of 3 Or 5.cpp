#include <iostream>

using namespace std;


void Multiple3OR5()
{
    for (int i = 1; i <= 100; i++)
    {
        if (i % 3 == 0)
        {
            cout << i << " is: Fizz." << endl;
        }
        
        if (i % 5 == 0)
        {
            cout << i << " is: Buzz." << endl;
        }
    }
     
}

int main()
{

    Multiple3OR5();
    
    return 0; 
}    