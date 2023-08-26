/*
Sort 0 1 2

You are given an integer array/list(ARR) of size N. It contains only 0s, 1s and 2s. 
Write a solution to sort this array/list in a 'single scan'.
'Single Scan' refers to iterating over the array/list just once or to put it in 
other words, you will be visiting each element in the array/list just once.

For Input :
1
7
0 1 2 0 2 0 1
Output :
0 0 0 1 1 2 2 

For Input :
2
5
2 2 0 1 1
7
0 1 2 0 1 2 0
Output :
0 1 1 2 2 
0 0 0 1 1 2 2
*/

#include <iostream>
// #include <algorithm>
using namespace std;

/* 
	Approach 1
void sort012(int *input, int n){
    if(n == 0 || n == 1){
        return;
    }
	int countZero = 0, countOne = 0, countTwo = 0;
	for(int i = 0; i < n;i++){
		if(input[i] == 0){
			countZero++;
		}else if(input[i] == 1){
			countOne++;
		}else{
			countTwo++;
		}
	}
	int i = 0;
	while(countZero){
		input[i] = 0;
		i++;
		countZero--;
	}
	while(countOne){
		input[i] = 1;
		i++;
		countOne--;
	}
	while(countTwo){
		input[i] = 2;
		i++;
		countTwo--;
	}
}
*/

/* Approach 2
void sort012(int *input, int n){
	int *temp = new int[n];
	int start = 0, end = n - 1;
	for(int i = 0; i < n;i++){
		if(input[i] == 0){
			temp[start] = 0;
			start++;
		}else if(input[i] == 2){
			temp[end] = 2;
			end--;
		}
	}
	while(start <= end){
		temp[start] = 1;
		start++;
	}
	for(int i = 0; i < n;i++){
		input[i] = temp[i];
	}
}
*/

/* Approach 3 Optimal Approach 
	Time Complexity : O(n)
	Space Complexity : O(1)
*/
void sort012(int *input, int n){
	int currentPos = 0;
	int zeroPos = 0;
	int twoPos = n - 1;
	// Always Use Equal to Sign
	while(currentPos <= twoPos){
		if(input[currentPos] == 0){
			swap(input[currentPos],input[zeroPos]);
			currentPos++;
			zeroPos++;
		}else if(input[currentPos] == 1){
			currentPos++;
		}else{
			swap(input[currentPos],input[twoPos]);
			twoPos--;
		}
	}
}

int main()
{
	int t;
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

		sort012(arr, size);

		for (int i = 0; i < size; i++)
		{
			cout << arr[i] << " ";
		}

		delete[] arr;
		cout << endl;
	}

	return 0;
}