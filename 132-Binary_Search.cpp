/*
Code Binary Search

You are given an integer array 'A' of size 'N', sorted in non-decreasing order. 
You are also given an integer 'target'.

Your task is to write a function to search for 'target' in the array 'A'. 
If it exists, return its index in 0-based indexing. Otherwise, return -1.

For Input: ‘N’ = 7 ‘target’ = 3
‘A’ = [1, 3, 7, 9, 11, 12, 45]

Output : 1

Explanation: For A = [1, 3, 7, 9, 11, 12, 45],
The index of element '3' is 1.
Hence, the answer is '1'.

For Input :
7
1 3 7 9 11 12 45
3
Output :
1

Explanation of output :
For nums = [1, 3, 7, 9, 11, 12, 45],
The index of element '3' is 1.
Hence, the answer is '1'.


For Input :
7
1 2 3 4 5 6 7
9
Output :
-1
Explanation of output :
For nums = [1, 2, 3, 4, 5, 6, 7],
Element '9' doesn't exist.
Hence, the answer is '-1'.


*/
#include<iostream>
using namespace std;

int binarySearch(int *arr, int n, int target){
    int start = 0;
    int end = n - 1;
    while(start <= end){
        int mid = (start + end)/2;
        if(arr[mid] == target){
            return mid;
        }
        else if(arr[mid] > target){
            end = mid - 1;
        }else{
            start = mid + 1;
        }
    }
    return -1;
}


int main(){
    int n;
    cin >> n;
    int *arr = new int[n];
    for(int i = 0; i < n;i++){
        cin >> arr[i];
    }
    int target;
    cout << "Enter Target Element : ";
    cin >> target;
    cout << "Index of Target Is : " << binarySearch(arr, n, target) << endl;

}