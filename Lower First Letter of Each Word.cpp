#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

string Readstring() {
	string S1;
	cout << "please enter yor sting\n";
	getline(cin, S1);
	return S1;
}
void isUpperFrsitLetterOffEachWord(string S1) {
	bool m = true;
	cout << "\n upper First letters of this string: \n";
	for (int i = 0; i < S1.length(); i++) {
		if (S1[i]!= ' ' && m )
		{
			S1[i] = tolower(S1[i]);
			cout << S1[i] << endl;
		}
		m = (S1[i] == ' ' ? true : false);
	}
}

int main()
{
	
	isUpperFrsitLetterOffEachWord(Readstring());
	return 0;
}