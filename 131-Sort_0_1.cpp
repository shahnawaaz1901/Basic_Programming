/*
Sort 0 1

You have been given an integer array/list(ARR) of size N that contains only integers, 
0 and 1. Write a function to sort this array/list. Think of a solution which scans the 
array/list only once and don't require use of an extra array/list.
Note:
You need to change in the given array/list itself. Hence, no need to return or print anything. 

For Input :
1
7
0 1 1 0 1 0 1
Output :
0 0 0 1 1 1 1

For Input :
2
8
1 0 1 1 0 1 0 1
5
0 1 0 1 0
Output :
0 0 0 1 1 1 1 1
0 0 0 1 1 
*/


#include <iostream>
using namespace std;

void sortZeroesAndOne(int *input, int size){
    int i = 0;
    int j = size - 1;
    while(i <= j){
        if(input[i] == 0){
            i++;
        }else if(input[j] == 1){
            j--;
        }else{
			int temp = input[i];
			input[i] = input[j];
			input[j] = temp;
			i++;j--;
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
		int input[size];

		for (int i = 0; i < size; ++i)
		{
			cin >> input[i];
		}

		sortZeroesAndOne(input, size);

		for (int i = 0; i < size; ++i)
		{
			cout << input[i] << " ";
		}

		cout << endl;
	}

	return 0;
}