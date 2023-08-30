#include<iostream>
using namespace std;
/*
    In 2D Array Arguments it's neccesory to take 2D array column size
    Column Size is Not m which column input we give
    column size pass which column size we use when array declaration
*/
void printArray(int arr[][100], int n, int m){
    for(int i = 0; i < n;i++){
        for(int j = 0; j < m;j++){
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
}
int main(){
    int n, m;
    int arr[100][100];
    cin >> n >> m;
    for(int i = 0; i < n;i++){
        for(int j = 0; j < m;j++){
            cin >> arr[i][j];
        }
    }
    printArray(arr, n, m);
}