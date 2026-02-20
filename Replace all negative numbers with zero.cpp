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

void ReplaceNegNumbersWithZerosInArray(int arr[], int N)
{
   int Count = 0;
   for (int i = 0; i < N ; i++)
   {
       if (arr[i] <  0)
       {
           arr[i] = 0;
       }
       
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
   cout << "Negative Numbers with zeros in an Array : " << endl;
   ReplaceNegNumbersWithZerosInArray(arr, NumberOfElements);
    
    return 0; 
}    
