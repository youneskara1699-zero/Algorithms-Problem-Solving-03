#include <iostream>
#include <string>
using namespace std;

string ReadString()
{
	string StrInput;

	cout << "\nPlease Enter Your String?\n";
	getline(cin, StrInput);

	return StrInput;
}

bool IsVowel(char Letter)
{
	Letter = tolower(Letter);
	return ((Letter == 'a') || (Letter == 'e') || (Letter == 'o') || (Letter == 'i') || (Letter == 'u'));
}

void PrintVowels(string StrInput)
{
	cout << "\nVowels in string are: ";

	for (short i = 0; i < StrInput.length(); i++)
	{
		if (IsVowel(StrInput[i]))
			cout << StrInput[i] << "   ";
	}
}

int main()
{
	string StrInput = ReadString();

	PrintVowels(StrInput);

	return 0;
}