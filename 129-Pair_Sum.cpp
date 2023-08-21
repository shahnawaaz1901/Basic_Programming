/*
Pair Sum

You have been given an integer array/list(ARR) and a number X. Find and return the total 
number of pairs in the array/list which sum to X.

Note:
Given array/list can contain duplicate elements. 

For Input :
1
9
1 3 6 2 5 4 3 2 4
7
Output :
7

For Input :
2
9
1 3 6 2 5 4 3 2 4
12
6
2 8 10 5 -2 5
10
Output :
0
2


Explanation for Input 2:
Since there doesn't exist any pair with sum equal to 12 for the first query, we print 0.

For the second query, we have 2 pairs in total that sum up to 10. They are, (2, 8) and (5, 5).
*/ 

#include <iostream>
using namespace std;

int pairSum(int *input, int size, int target){
    int pairNum = 0;
    for(int i = 0; i < size;i++){
        for(int j = 0; j < size;j++){
            if(i == j){
                continue;
            }
            if(input[i] + input[j] == target){
                pairNum++;
            }
        }
    }
    return pairNum/2;
}
int main()
{
	int t;
	cin >> t;

	while (t--)
	{
		int size;
		int x;

		cin >> size;
		int *input = new int[size];

		for (int i = 0; i < size; i++)
		{
			cin >> input[i];
		}

		cin >> x;

		cout << pairSum(input, size, x) << endl;

		delete[] input;
	}
	
	return 0;
}