/*
Second Largest in array

You have been given a random integer array/list(ARR) of size N. 
You are required to find and return the second largest element present in the array/list.

For Input :
5
4 3 10 9 2
Output :
9

For Input :
7
13 6 31 14 29 44 3
Output :
31
*/

#include <iostream>
#include<climits>
using namespace std;

int findSecondLargest(int *arr, int n){
    int max = INT_MIN;
    int secondMax = INT_MIN;
    for(int i = 0; i < n;i++){
        if(arr[i] > max){
            secondMax = max;
            max = arr[i];
        }else if(arr[i] > secondMax && arr[i] != max){
            secondMax = arr[i];
        }
    }
    return secondMax;
}

int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int ans = findSecondLargest(arr, n);
    cout<<ans;
    return 0;
}
