/*
Wave Print

For a given two-dimensional integer array/list of size (N x M), 
print the array/list in a sine wave order, i.e, print the first column top to bottom, 
next column bottom to top and so on.

Each of the ith row constitutes 'M' column values separated by a single space.
Output format :
For each test case, print the elements of the two-dimensional array/list in the sine wave order in a single line, separated by a single space.

For Input :
3 4 
1  2  3  4 
5  6  7  8 
9 10 11 12
Output :
1 5 9 10 6 2 3 7 11 12 8 4

For Input :
5 3 
1 2 3 
4 5 6 
7 8 9 
10 11 12 
13 14 15
Output :
1 4 7 10 13 14 11 8 5 2 3 6 9 12 15 

*/

#include <iostream>
using namespace std;

void wavePrint(int **input, int row, int col){
    for(int j = 0; j < col;j++){
		if(j % 2 == 0){
			for(int i = 0; i < row;i++){
				cout << input[i][j] << " ";
			}
		}else{
			for(int i = row - 1; i >= 0;i--){
				cout << input[i][j] << " ";
			}
		}
    }
}

int main()
{

		int row, col;
		cin >> row >> col;
		int **input = new int *[row];
		for (int i = 0; i < row; i++)
		{
			input[i] = new int[col];
			for (int j = 0; j < col; j++)
			{
				cin >> input[i][j];
			}
		}
		wavePrint(input, row, col);
		cout << endl;

}