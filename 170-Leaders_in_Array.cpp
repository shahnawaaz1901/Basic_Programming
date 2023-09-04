/*
Leaders in array

Given an integer array A of size n. Find and print all the leaders present in the 
input array. An array element A[i] is called Leader, if all the elements following 
it (i.e. present at its right) are less than or equal to A[i].

Print all the leader elements separated by space and in the same order they are 
present in the input array.

For Input :
6
3 12 34 2 0 -1
Output :
34 2 0 -1

For Input :
5
13 17 5 4 6
Output :
17 6
*/

#include<iostream>
#include<climits>
using namespace std;

void Leaders(int arr[], int n){
    int leader = INT_MIN;
    int k = 0;
    int output[1000];
    for(int i = n - 1;i >= 0;i--){
        if(arr[i] >= leader){
            output[k] = arr[i];
            leader = arr[i];
        }
    }
    for(int i = k - 1; i >= 0;i--){
        cout << output[i] << " ";
    }
}

int main()
{
    int len;
    cin>>len;
	int arr[len];
	for(int i=0;i<len;i++)
	{
		cin>>arr[i];
	}
	Leaders(arr,len);
}