#include <iostream>
#include <iomanip>
using namespace std;

int random_num_in_range(int from, int to)
{
    return rand() % (to - from + 1) + from;
}
void get_matrix_randomly(int arr[10][10], int rows, int columns)
{

    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < columns; j++)
        {
            arr[i][j] = random_num_in_range(1, 10);
        }
    }
}
void print_matrix(int arr[10][10], int rows, int columns)
{


    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < columns; j++)
        {
            printf("%0*d", 2, arr[i][j]);
            cout << "\t";
        }
        cout << endl;
    }
    cout << endl;

}
void get_result_product_2matrix(int arr_result[10][10], int arr[10][10], int arr2[10][10],int rows,int columns)
{
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < columns; j++)
        {
            arr_result[i][j] = arr[i][j]* arr2[i][j];
        }
    }
}


int main()
{
    srand((unsigned)time(NULL));

    int arr[10][10];
    int arr2[10][10];
    int arr_result[10][10];


    get_matrix_randomly(arr, 3, 3);
    get_matrix_randomly(arr2, 3, 3);
    get_result_product_2matrix(arr_result, arr, arr2, 3, 3);

    cout << "Matrix 1 :\n";
    print_matrix(arr, 3, 3);

    cout << "Matrix 2 :\n";
    print_matrix(arr2, 3, 3);

    cout << "Results :\n";
    print_matrix(arr_result, 3, 3);

}