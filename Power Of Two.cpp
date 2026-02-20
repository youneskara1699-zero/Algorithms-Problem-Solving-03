#include <iostream>

using namespace std;

int ReadNumber()
{
    int Number;
    cout << "Enter Number: ";
    cin >> Number;

    return Number;
}
   
bool IsPowerOfTwo(int Number)
{
    while (Number > 1)
    {
        if (Number % 2 != 0)
        {
            return false;
        }
        
        Number = Number/2;
    }
  
    return true;
}

int main()
{
    int Number = ReadNumber();
    if (IsPowerOfTwo(Number))
        cout << Number << " is power of 2." << endl;
    else
        cout << Number << " is NOT power of 2." << endl;

    return 0; 
}    