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

void PrintEachWordInString(string StrInput)
{
	string delim = " ";

	cout << "\nYour string words are: \n\n";
	short Pos = 0;
	string sWord;

	while ((Pos = StrInput.find(delim)) != string::npos)
	{
		sWord = StrInput.substr(0, Pos);
		if (sWord != "")
		{
			cout << sWord << endl;
		}
		StrInput.erase(0, Pos + delim.length());
	}

	if (StrInput != "")
	{
		cout << StrInput;
	}
	
}

int main()
{

	PrintEachWordInString(ReadString());

	return 0;
}