/*
Largest Row or Column

For a given two-dimensional integer array/list of size (N x M), you need to find out 
which row or column has the largest sum(sum of all the elements in a row/column) amongst 
all the rows and columns.

Note :
If there are more than one rows/columns with maximum sum, consider the row/column 
that comes first. And if ith row and jth column has the same largest sum, consider 
the ith row as answer.

Output Format :
If row sum is maximum, then print: "row" <row_index> <row_sum>
OR
If column sum is maximum, then print: "column" <col_index> <col_sum>

Consider :
If there doesn't exist a sum at all then print "row 0 -2147483648", 
where -2147483648 or -2^31 is the smallest value for the range of Integer.

For Input :
3 2         // n and m Value
6 9 
8 5 
9 2 
Output :
column 0 23

For Input :
4 4         // n and m Value
6 9 8 5 
9 2 4 1 
8 3 9 3 
8 7 8 6 
Output :
column 0 31
*/

#include<iostream>
using namespace std;
void largestRowColumnSum(int arr[][100], int n, int m){
    bool rowMaximum = true;
    int maxSum = 0;
    int index = -1;
    for(int i = 0; i < n;i++){
        int sum = 0;
        for(int j = 0; j < m;j++){
            sum += arr[i][j];
        }
        if(sum > maxSum){
            maxSum = sum;
            index = i;
        }
    }
    for(int j = 0; j < m;j++){
        int sum = 0;
        for(int i = 0; i < n;i++){
            sum += arr[i][j];
        }
        if(sum > maxSum){
            maxSum = sum;
            rowMaximum = false;
            index = j;
        }
    }
    if(rowMaximum){
        cout << "column" << index << maxSum << endl;
    }else{
        cout << "Row" << index << maxSum << endl;
    }
}
int main(){
    int n, m;
    cin >> n >> m;
    int arr[100][100];
    for(int i = 0; i < n;i++){
        for(int j = 0; j < m;j++){
            cin >> arr[i][j];
        }
    }
    largestRowColumnSum(arr, n, m);
}