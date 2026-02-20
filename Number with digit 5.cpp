#include <iostream>

using namespace std;

int ReadNumber()
{
    int Number;
    cout << "Enter Max Number: ";
    cin >> Number;

    return Number;
}

bool HasDigit5(int Number)
{
    int TempNum = Number;
    int Digit;    

    while (TempNum != 0)
    {
        Digit = TempNum % 10;
        if (Digit == 5)
        {   
            return true;
        }

        TempNum = TempNum /10;
    }
    
    
    return false; 
}

int main()
{
    int Count = ReadNumber(); 
     
    for (int i = 0; i < Count; i++)
    {
       int num;
       cout << "Enter Number " << i+1 << ": ";
       cin >> num;
       
       if (HasDigit5(num))
       {
            cout << num << " contains digit 5" << endl;
       }

       else
       {
            cout << num << " does NOT contain digit 5" << endl;
       }
       
    }
    
     
   
    

    return 0; 
}    