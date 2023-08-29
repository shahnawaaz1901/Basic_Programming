/*
Column Wise Sum

Given a 2D integer array of size M*N, find and print the sum of ith column elements 
separated by space.

Input Format :
First and only line of input contains M and N, followed by M * N space separated integers representing the elements in the 2D array.
Output Format :
Sum of every ith column elements (separated by space)

For Input :
4 2 
1 2 
3 4 
5 6 
7 8
Output :
16 20

For Input :
6 4
28 26 24 22
21 23 25 27
20 18 16 14
13 15 17 19
12 10 8  6
5  7  11 13  
Output :
99 99 101 101
*/


#include<iostream>
using namespace std;

int main(){
    int arr[100][100];
    int n, m;
    cin >> n >> m;
    for(int i = 0; i < n;i++){
        for(int j = 0; j < m;j++){
            cin >> arr[i][j];
        }
    }

    int sum = 0;
    for(int j = 0; j < m;j++){
        for(int i = 0; i < n;i++){
            sum += arr[i][j];
        }
        cout << sum << " ";
        sum = 0;
    }
}