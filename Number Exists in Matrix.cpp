#include <iostream>
using namespace std;

void PrintMatrix(int Matrix[3][3], short Rows, short Cols)
{
	for (short i = 0; i < Rows; i++)
	{
		for (short j = 0; j < Cols; j++)
		{
			printf("%0*d     ", 2, Matrix[i][j]);
		}
		cout << endl;
	}
}

bool IsNumberInMatrix(int Matrix1[3][3], int Number, short Rows, short Cols)
{
	for (short i = 0; i < Rows; i++)
	{
		for (short j = 0; j < Cols; j++)
		{
			if (Number == Matrix1[i][j])
				return true;
		}
	}
	return false;
}

int main()
{
	//int Matrix1[3][3]={{1,2,3},{4,5,6},{7,8,9}};
	int Matrix1[3][3] = { {77,5,12},{22,20,1},{1,0,9} };

	cout << "\nMatrix1:\n";
	PrintMatrix(Matrix1, 3, 3);

	int Number;
	cout << "\nPlease Enter the number to look for in matrix? ";
	cin >> Number;

	if (IsNumberInMatrix(Matrix1, Number, 3, 3))
		cout << "\nYes it is there.\n";
	else
		cout << "\nNo: It's NOT there.\n";

	return 0;
}