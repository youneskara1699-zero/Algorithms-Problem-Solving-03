#include <iostream>

using namespace std;

int ReadNumber(string Message)
{
    int Number;
    cout << Message;
    cin >> Number;

    return Number;
}

string NumberChecker()
{
    int Number =  ReadNumber("Enter Number: "); 
    return((Number == 0) ? "Zero" : (Number > 0) ? "Positive" : "Negative" );
    
}

int main()
{
    cout << "================================" << endl;
    cout << "                        " << endl;  
    cout << "================================" << endl;

    cout << NumberChecker();

    return 0; 
}    
