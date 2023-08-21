/*
Arrange Numbers in Array

You have been given an empty array(ARR) and its size N. The only input taken from the user 
will be N and you need not worry about the array.
Your task is to populate the array using the integer values in the range 1 to N(both inclusive) 
in the order - 1,3,5,.......,6,4,2.

For Input :
1
6
Output :
1 3 5 6 4 2

Explanation of Sample Input :
Since the value of N is 6, the number will be stored in the array in such a fashion that 1 will appear at 0th index, then 2 at the last index, in a similar fashion 3 is stored at index 1. Hence the array becomes 1 3 5 6 4 2.

For Input :
2
9
3
Output :
1 3 5 7 9 8 6 4 2
1 3 2
*/

#include <iostream>
using namespace std;

void arrange(int arr[], int n){
    int i = 0;
    int j = n - 1;
    int x = 1;
    for(int y = 1; y <= n;y++,x++){
        int data = x;
        if(data % 2 != 0 ){
            arr[i] = data;
            i++;
        }else{
            arr[j] = data;
            j--;
        }
    }
}

int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		int n;
		cin >> n;

		int *arr = new int[n];
		arrange(arr, n);
		for (int i = 0; i < n; i++)
		{
			cout << arr[i] << " ";
		}
		cout << endl;
		delete [] arr;
	}

	
}