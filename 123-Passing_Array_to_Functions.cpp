/*
    Because We Pass Array Whole Array Not Pass Only Address of Array is Passed So
    if We Change Some Element in Functions then Changes Would be reflected
    into main function array
*/

#include <iostream>
using namespace std;
void increment(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        arr[i]++;
    }
}
int main()
{
    int n;
    cin >> n;
    int arr[100];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    increment(arr, n);
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}