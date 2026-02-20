#include <iostream>

using namespace std;

int ReadNumber()
{
    int Number;
    cout << "Enter Number: ";
    cin >> Number;

    return Number;
}

void Multiple10()
{
    int Number;

    do
    {
      Number = ReadNumber(); 

      if (Number % 10 != 0)
      {
        cout << Number << endl;
      }
      
    } while (Number % 10 != 0);
     
}

int main()
{
   Multiple10();
    
    return 0; 
}    