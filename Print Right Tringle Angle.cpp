#include <iostream>

using namespace std;



void PrintRightTriangleAngle()
{
    for (int i = 1; i <= 6; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << "*" ;
        }
        
        cout << endl;
    }
      
}

int main()
{
   PrintRightTriangleAngle();

    return 0; 
}    