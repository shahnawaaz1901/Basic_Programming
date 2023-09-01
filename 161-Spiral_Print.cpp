/*
Spiral Print

For a given two-dimensional integer array/list of size (N x M), print it in a spiral form.
That is, you need to print in the order followed for every iteration:
a. First row(left to right)
b. Last column(top to bottom)
c. Last row(right to left)
d. First column(bottom to top)
Mind that every element will be printed only once.


For Input :
4 4
1 2 3 4
5 6 7 8
9 10 11 12
13 14 15 16
Output :
1 2 3 4 8 12 16 15 14 13 9 5 6 7 11 10

For Input :
3 3
1 2 3
4 5 6
7 8 9

Output :
1 2 3 6 9 8 7 4 5
10 20 30

For Input :
3 1
10
20
30
Output :
10 20 30
*/

#include <iostream>
using namespace std;

void spiralPrint(int **matrix, int row, int col){
    int i = 1;
    int total = row * col;
    int colStart = 0;
    int colEnd = col - 1;
    int rowStart = 0;
    int rowEnd = row - 1;
    while(i <= total){
        for(int j = colStart;j <= colEnd && i <= total;j++){
            cout << matrix[rowStart][j] << " ";
            i++;
        }
        rowStart++;
        for(int j = rowStart; j <= rowEnd && i <= total;j++){
            cout << matrix[j][colEnd] << " ";
            i++;
        }
        colEnd--;
        for(int j = colEnd; j >= colStart && i <= total;j--){
            cout << matrix[rowEnd][j] << " ";
            i++;
        }
        rowEnd--;
        for(int j = rowEnd; j >= rowStart && i <= total;j--){
            cout << matrix[j][colStart] << " ";
            i++;
        }
        colStart++;
    }
}

int main()
{
    int row, col;
    cin >> row >> col;
    int **matrix = new int *[row];

    for (int i = 0; i < row; i++)
    {
        matrix[i] = new int[col];
        for (int j = 0; j < col; j++)
        {
            cin >> matrix[i][j];
        }
    }
    spiralPrint(matrix, row, col);

    for (int i = 0; i < row; ++i)
    {
        delete[] matrix[i];
    }
    delete[] matrix;

    cout << endl;
}