#include <iostream>  
using namespace std;  

string ReadString()
{
    string S1 = "";  
    cout << "\nPlease enter a string: ";
    getline(cin >> ws, S1);  
    return S1;  
}

string RemoveSpacesFromString(string S1)
{
   string S2 = "";
   char space = ' ';
   for (int i = 0; i < S1.length(); i++)
   {
       if (S1[i] != space)
       {
          S2 += S1[i];
       } 
   }
   
   return S2;
}


int main()
{
    string S1 = "";
    S1 = ReadString();
    cout << "Before Removing spaces string: " << S1 << endl;
    
    cout << "Remove Spaces From String: " << RemoveSpacesFromString(S1) << endl;

    return 0;  
}