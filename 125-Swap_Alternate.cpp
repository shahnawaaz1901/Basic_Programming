/*
Swap Alternate

You have been given an array/list(ARR) of size N. You need to swap every pair of alternate
elements in the array/list.

For Input :
1
6
9 3 6 12 4 32
Output :
3 9 12 6 32 4

For Input:
2
9
9 3 6 12 4 32 5 11 19
4
1 2 3 4
Output :
3 9 12 6 32 4 11 5 19
2 1 4 3
*/

#include <iostream>
using namespace std;

void swapAlternate(int arr[], int n)
{

    int i = 0;
    int j = i + 1;
    while (i < n - 1)
    {
        int temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
        i += 2;
        j += 2;
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
        swapAlternate(arr, size);
        for (int i = 0; i < size; i++)
        {
            cout << arr[i] << " ";
        }
        cout << endl;
        delete[] arr;
    }
}