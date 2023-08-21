/*
Triplet Sum

You have been given a random integer array/list(ARR) and a number X. Find and return 
the number of triplets in the array/list which sum to X.

For Input :
1
7
1 2 3 4 5 6 7 
12
Output:
5

For Input :
2
7
1 2 3 4 5 6 7 
19
9
2 -5 8 -6 0 5 10 11 -3
10
Output:
0
5


Explanation for Input :
Since there doesn't exist any triplet with sum equal to 19 for the first query, we print 0.

For the second query, we have 5 triplets in total that sum up to 10. 
They are, (2, 8, 0), (2, 11, -3), (-5, 5, 10), (8, 5, -3) and (-6, 5, 11)
*/


#include <iostream>
using namespace std;

int tripletSum(int *input, int size, int x){
    int tripletNum = 0;
    for(int i = 0; i < size;i++){
        for(int j = i + 1; j < size;j++){
            for(int k = j + 1; k < size;k++){
                if(input[i] + input[j] + input[k] == x){
                    tripletNum++;
                }
            }
        }
    }
    return tripletNum;
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

		cout << tripletSum(input, size, x) << endl;

		delete[] input;
	}

	return 0;
}