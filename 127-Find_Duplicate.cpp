/*
Find Duplicate

You have been given an integer array/list(ARR) of size N which contains numbers from 
0 to (N - 2). Each number is present at least once. That is, if N = 5, the array/list 
constitutes values ranging from 0 to 3 and among these, there is a single integer value 
that is present twice. You need to find and return that duplicate number present in the array.

Note :
Duplicate number is always present in the given array/list.

For Input :
1
9
0 7 2 5 4 7 1 3 6
Output :
7

For Input 2:
2
5
0 2 1 3 1
7
0 3 1 5 4 3 2
Output :
1
3
*/
#include<iostream>
using namespace std;
int findDuplicate(int arr[], int n){
    for(int i = 0; i < n;i++){
        for(int j = 0; j < n;j++){
            if(i == j){
                continue;
            }
            if(arr[i] == arr[j]){
                return arr[i];
            }
        }
    }return -1;
}
int main()
{
    int t;
    cout << "Enter Test Cases : ";
    cin >> t;
    while (t--)
    {
        int size;
        cin >> size;
        int *arr = new int[size];
        for (int i = 0; i < size; i++)
        {
            cin >> arr[i];
        }
        int duplicateNum = findDuplicate(arr, size);
        if(duplicateNum != -1){
            cout << "Duplicate Element Is : " << duplicateNum << endl;
        }else{
            cout << "Not Duplicate Element is Present " << endl;
        }
    }
}