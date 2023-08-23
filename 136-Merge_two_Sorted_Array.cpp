/*
Code Merge Two Sorted Arrays

You have been given two sorted arrays/lists(ARR1 and ARR2) of size N and M respectively, 
merge them into a third array/list such that the third array is also sorted.

Consider the case when size of the two arrays is not same.

For Input :
5
1 3 4 7 11
4
2 4 6 13
Output :
1 2 3 4 4 6 7 11 13 

For Input :
3
10 100 500
7
4 7 9 25 30 300 450

Output :
4 7 9 10 25 30 100 300 450 500

*/

#include<iostream>
using namespace std;

void mergeSortedArray(int *arr1, int m, int *arr2, int n, int *ans){
    int i = 0, j = 0,k = 0;
    while(i < m && j < n){
        if(arr1[i] < arr2[j]){
            ans[k] = arr1[i];
            i++;
        }else{
            ans[k] = arr2[j];
            j++;
        }
        k++;
    }
    while (i < m)
    {
        ans[k] = arr1[i];
        i++;
        k++;
    }

    while(j < n){
        ans[k] = arr2[j];
        j++;
        k++;
    }
}

int main(){
    int m;
    cin >> m;
    int *arr1 = new int[m];
    for(int i = 0; i < m;i++){
        cin >> arr1[i];
    }
    int n;
    cin >> n;
    int *arr2 = new int[n];
    for(int i = 0; i < n;i++){
        cin >> arr2[i];
    }
    int *ans = new int[m + n];
    mergeSortedArray(arr1,m,arr2,n,ans);
}