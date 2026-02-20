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
void TheFrsitLetterOffEachWord(string S1) {
	bool m = true;
	cout << "\nFirst letters of this string: \n";
	for (int i = 0; i < S1.length(); i++) {
		if (S1[i]!= ' ' && m )
		{
			cout << S1[i] << endl;
		}
		m = (S1[i] == ' ' ? true : false);
	}
}

int main()
{
	
	TheFrsitLetterOffEachWord(Readstring());
	return 0;
}