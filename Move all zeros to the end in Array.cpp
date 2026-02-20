#include <iostream>
using namespace std;

int ReadNumber(string Message)
{
    int Number;
    cout << Message;
    cin >> Number;
    return Number;
}

void ReadArrElements(int arr[], int N)
{
   for (int i = 0; i < N ; i++)
   {
       cout << "arr["<< i+1 <<"]: ";
       cin >> arr[i];
   } 
}

void PrintArrElements(int arr[], int N)
{
   for (int i = 0; i < N ; i++)
   {
       cout << arr[i] << endl;
   }
}



int main()
{
  
   int NumberOfElements = ReadNumber("Read Array Elements: ");
   int arr[NumberOfElements];
   ReadArrElements(arr, NumberOfElements);
   cout << "Array Elements are: " << endl;
   PrintArrElements(arr, NumberOfElements);
    
    return 0; 
}    
