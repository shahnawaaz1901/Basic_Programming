/*
Check Array Rotation

You have been given an integer array/list(ARR) of size N. It has been 
sorted(in increasing order) and then rotated by some number 'K' (K is greater than 0) 
in the right hand direction.

Your task is to write a function that returns the value of 'K', that means, 
the index from which the array/list has been rotated.

For Input :
1
6
5 6 1 2 3 4
Output :
2

For Input :
2
5
3 6 8 9 10
4
10 20 30 1
Output :
0
3
*/

#include <iostream>
using namespace std;

int arrayRotateCheck(int *input, int n){
    int rotation = 0;
    for(int i = 0; i < n - 1;i++){
        if(input[i + 1] < input[i] ){
            rotation = i + 1;
            break;
        }
    }
    return rotation;
}

int main()
{

	int t;
	cin >> t;
	while (t--)
	{

		int size;
		cin >> size;
		int *input = new int[size];

		for (int i = 0; i < size; i++)
		{
			cin >> input[i];
		}

		cout << arrayRotateCheck(input, size) << endl;
		delete[] input;
	}
	
	return 0;
}