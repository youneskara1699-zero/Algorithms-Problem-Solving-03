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

void PrintDuplicateCharacters(const string& S1)
{
    int n = S1.length();
    bool counted[256] = {false};
    

    for (int i = 0; i < n; i++)
    {
        int DuplicateCounter = 0;
        char Char = tolower(S1[i]);
        
        if (counted[Char] == false && isalpha(Char)) 
        { 
            for (int j = 0; j < n; j++)
            {  
                if (Char == tolower(S1[j]))
                   DuplicateCounter++; 
            }
        
            if (DuplicateCounter > 1)
            {
              cout << Char << "  ";
              counted[Char] = true;
            }
        }        
    } 
}

int main()
{
   PrintDuplicateCharacters(ReadString());

   return 0;  
}