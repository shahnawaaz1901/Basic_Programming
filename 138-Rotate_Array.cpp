/*
Rotate array

You have been given a random integer array/list(ARR) of size N. Write a function that
rotates the given array/list by D elements(towards the left).

For Input :
7
1 2 3 4 5 6 7
2
Output :
3 4 5 6 7 1 2

For Input :
7
1 2 3 4 5 6 7
0
Output :
1 2 3 4 5 6 7
*/
#include <iostream>
using namespace std;

void reverse(int *arr, int start, int end)
{
    if (start >= end)
    {
        return;
    }
    while (start < end)
    {
        swap(arr[start], arr[end]);
        start++;
        end--;
    }
}
void rotateArray(int *arr, int x, int n)
{

    if (n == 0 || n == 1 || x == 0)
    {
        return;
    }
    reverse(arr, 0, x - 1);
    reverse(arr, x, n - 1);
    reverse(arr, 0, n - 1);
}

int main()
{
    int n;
    cin >> n;
    int *arr = new int[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int x;
    cin >> x;
    rotateArray(arr, n, x);
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}