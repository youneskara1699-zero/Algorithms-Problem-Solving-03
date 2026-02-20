#include <iostream>
using namespace std;

const int MAX_SIZE = 100;
int ReadNumber(string Message)
{
    int Number;
    do
    {
       cout << Message;
       cin >> Number;

    } while ((Number > MAX_SIZE) || (Number < 1));
    
    return Number;
}


void Read2DArrayElements(int arr[MAX_SIZE][MAX_SIZE], int NumberOfRows, int NumberOfCols)
{
    for (int i = 0; i < NumberOfRows ; i++)
    {   
        cout << "Enter elements of Row " << i+1 << ": "<< endl;
        for (int j = 0; j < NumberOfCols ; j++)
        {
            cout << "Col " << j+1 << ": ";
            cin >> arr[i][j];
        }
    }
}

void Print2DArrayElements(int arr[][100], int NumberOfRows, int NumberOfCols)
{
    for (int i = 0; i < NumberOfRows ; i++)
    {   
        cout << endl <<"Elements of Row " << i+1 << ": "<< endl;
        for (int j = 0; j < NumberOfCols ; j++)
        {
            cout << "Col " << j+1 << ": " << arr[i][j] << endl;
        }
    }
}


int main()
{
   int NumberOfRows = ReadNumber("Enter Number of Rows (1 to 100): ");
   int NumberOfCols = ReadNumber("Enter Number of Cols (1 to 100): ");
   int arr[MAX_SIZE][MAX_SIZE];
   
   Read2DArrayElements(arr, NumberOfRows, NumberOfCols);
   cout << "=========================================" << endl;
   Print2DArrayElements(arr, NumberOfRows, NumberOfCols);
   cout << "=========================================" << endl;
    return 0; 
}    
