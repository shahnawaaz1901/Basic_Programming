/*
Print Number Pattern in This Fashion
For n = 4
1
23
456
78910

For n = 5
1
23
456
78910
11121314
*/

#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int i = 1;
    int j = 1;
    while (i <= n){
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
