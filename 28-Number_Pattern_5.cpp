/*
Print the following pattern

for N = 4

1
23
345
4567

for N = 3

1
23
345

*/
#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int i = 1;
    while (i <= n){
        int j = i;
        int k = 1;
        while (k <= i)
        {
            cout << j;
            j++;
            k++;
        }
        i++;
        cout << endl;
    }
}