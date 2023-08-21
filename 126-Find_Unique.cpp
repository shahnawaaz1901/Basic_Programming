/*
Find Unique

You have been given an integer array/list(ARR) of size N. Where N is equal to [2M + 1].
Now, in the given array/list, 'M' numbers are present twice and one number is present only once.
You need to find and return that number which is unique in the array/list.

For Input :
1
7
2 3 1 6 3 6 2
Output :
1

For Input :
2
5
2 4 7 2 7
9
1 3 1 3 6 6 7 10 7
Output :
4
10

*/

#include <iostream>
using namespace std;

int findUnique(int arr[], int n){
    for(int i = 0; i < n;i++){
        bool match = false;
        for(int j = 0; j < n;j++){
            if( i == j){
                continue;
            }
            if(arr[i] == arr[j]){
                match = true;
                break;
            }
        }
        if(!match){
            return arr[i];
        }
    }
}

int main()
{
    int t;
    cout << "Enter Test Cases : ";
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
        cout << "Unique Element Is : " << findUnique(arr, size) << endl;
    }
}

