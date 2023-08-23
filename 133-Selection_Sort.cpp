#include <iostream>
using namespace std;

void selectionSort(int *arr, int size)
{
    if (size == 0 || size == 1)
    {
        return;
    }

    for (int i = 0; i < size - 1; i++)
    {
        int minIndex = i;
        int min = arr[i];
        for (int j = i + 1; j < size; j++)
        {
            if (arr[j] < min)
            {
                min = arr[j];
                minIndex = j;
            }
        }
        int temp = arr[i];
        arr[i] = arr[minIndex];
        arr[minIndex] = temp;
    }
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
    selectionSort(arr, n);
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}