#include <iostream>
#include <string>
#include <cctype>
#include <vector>

using namespace std;

string ReplaceWordInStringUsingSplits(string S1,string StringToReplace,string sReplace)
{
    short pos = S1.find(StringToReplace);

    while (pos != std::string::npos)
    {
        string S1Before = S1.substr(0, pos);
        string S1After = S1.substr(pos + StringToReplace.length());

        S1 = S1Before + sReplace + S1After;

        pos = S1.find(StringToReplace);
    }

    return S1;

}

int main()
{
    string S1 = "Welcome To Algeria , Algeria is a good country !";
    string StringToReplace = "Algeria";
    string ReplaceTo = "USA";

    cout << "\nOriginal String :\n" << S1 << endl;
    cout << "\nString After Replace:\n";
    cout << ReplaceWordInStringUsingSplits(S1, StringToReplace, ReplaceTo);
    cout << endl << endl;

    return 0;
}