#include <iostream>

using namespace std;

int RandomNumber(int From, int To)
{
	int randomNumber = rand() % (To - From + 1) + From;
	return randomNumber;
}

void FillRondomMatrix(int arrMatrix[3][3], short Rows, short Cols)
{

	for (short i = 0; i < Rows; i++)
	{

		for (short j = 0; j < Cols; j++)
		{
			arrMatrix[i][j] = RandomNumber(1, 10);
		}
	}
}

void PrintMatrix(int arrMatrix[3][3], short Rows, short Cols)
{

	for (int i = 0; i < Rows; i++)
	{

		for (short j = 0; j < Cols; j++)
		{
			printf("%0*d ", 2, arrMatrix[i][j]);
		}

		cout << endl;
	}
}

void PrintMiddleRow(int Matrix[3][3], short Rows, short Cols)
{
	cout << "\nMiddle Row of Matrix:\n";
	for (short i = 1; i < Rows; i++)
	{

		for (int j = 0; j < Cols; j++)
		{
			printf("%0*d ", 2, Matrix[i][j]);
		}
	}
}

void PrintMiddleCol(int arrMatrix[3][3], short Rows, short Cols)
{
	cout << "\n\nMiddle Col of Matrix:\n";
	for (short i = 1; i < Rows; i++)
	{

		for (short j = 0; j < Cols; j++)
		{

			printf("%0*d  ", 2, arrMatrix[j][i]);
		}
	}
}

int main()
{

	int Matrix[3][3];
	FillRondomMatrix(Matrix, 3, 3);

	cout << "\n3 x 3 Matrix:\n";
	PrintMatrix(Matrix, 3, 3);
	
	PrintMiddleRow(Matrix, 2, 3);

	PrintMiddleCol(Matrix, 2, 3);

	return 0;
} 