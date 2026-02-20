#include <iostream>  
#include <cctype> 
#include <string>  
using namespace std;  

string ReadString()
{
    string S1 = "";  
    cout << "\nPlease enter a string: ";
    getline(cin >> ws, S1);  
    return S1;  
}

string RemoveDuplicateCharacters(const string& S1)
{
    int n = S1.length();
    bool counted[256] = {false};
    string S2 = "";

    for (int i = 0; i < n; i++)
    {
        if (!counted[S1[i]])
        {
           S2 += S1[i];
           counted[S1[i]] = true;
        }  
    } 

    return S2;
}

int main()
{
   string S1 = ReadString();

   cout << "Before Removing Duplicate characters: " << S1 << endl;
   cout << "After Removing Duplicate characters: " << RemoveDuplicateCharacters(S1) << endl;

   return 0;  
}