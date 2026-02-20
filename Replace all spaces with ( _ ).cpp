#include <iostream>  
using namespace std;  

string ReadString()
{
    string S1 = "";  
    cout << "\nPlease enter a string: ";
    getline(cin >> ws, S1);  
    return S1;  
}

string ReplaceAllSpacesFromString(string S1)
{
   string S2 = "";
   char space = ' ';
   char Mark = '_';
   for (int i = 0; i < S1.length(); i++)
   {
       if (S1[i] == space)
       {
          S1[i] = Mark;
       } 
   }
   
   return S1;
}


int main()
{
    string S1 = "";
    S1 = ReadString();
    cout << "Before Replacing spaces string: " << S1 << endl;
    
    cout << "After Replacing Spaces From String: " << ReplaceAllSpacesFromString(S1) << endl;

    return 0;  
}