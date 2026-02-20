#include <iostream>
#include <string>
using namespace std;

string ReadString()
{
	string StrInput;

	cout << "\nPlease Enter Your String: ";
	getline(cin, StrInput);

	return StrInput;
}

bool IsVowel(char Letter)
{
	Letter = tolower(Letter);
	return ((Letter == 'a') || (Letter == 'e') || (Letter == 'o') || (Letter == 'i') || (Letter == 'u'));
}

string RemoveAllVowelsFromString(const string& S1)
{
	string S2 = "";
    
    for (char Ch : S1)
    {
        if (!IsVowel(Ch)) S2 += Ch; 
    }
    
	return S2;
}

int main()
{
	string S1 = ReadString();
	
    cout << "Before Removing all Vowels from String: " << S1 << endl;

	cout << "After Removing all Vowels from String: " << RemoveAllVowelsFromString(S1) << endl;

	return 0;
}