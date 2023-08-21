/*
Linear Search

You have been given a random integer array/list(ARR) of size N, and an integer X. 
You need to search for the integer X in the given array/list using 'Linear Search'.

You have been required to return the index at which X is present in the array/list. 
If X has multiple occurrences in the array/list, then you need to return the index 
at which the first occurrence of X would be encountered. 
In case X is not present in the array/list, then return -1.

'Linear search' is a method for finding an element within an array/list. 
It sequentially checks each element of the array/list until a match is found 
or the whole array/list has been searched.

For Input :
1
7
2 13 4 1 3 6 28
3
Output :
4

For Input :
2
7
2 13 4 1 3 6 28
9
5
7 8 5 9 5      
5
Output :
-1
2
*/

#include<iostream>
using namespace  std;

int linearSearch(int arr[], int n, int x){
    if(n == 0){
        return -1;
    }
    int index = -1;
    for(int i = 0; i < n;i++){
        if(arr[i] == x){
            index = i;
            break;
        }
    }
    return index;
}
int main(){
    int testCases;
    cout << "Enter Number of Test Cases : ";
    cin >> testCases;
    while(testCases != 0){
        int n;
        cout << "Enter Size of Array : ";
        cin >> n;
        int arr[1000];
        for(int i = 0; i < n;i++){
            cin >> arr[i];
        }
        int x;
        cout << "Enter X : ";
        cin >> x;
        int index = linearSearch(arr, n, x);
        if(index != -1){
            cout << "X is Present at Index : " << index << endl;
        }else{
            cout << "X Not Found " << endl;
        }
        testCases--;
    }

}
