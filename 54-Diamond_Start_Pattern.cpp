/*
Print the following pattern for the given number of rows.

N is Always Odd

For N = 5

  *
 ***
*****
 ***
  *

For N = 3

 *
***
 *
*/

#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int i = 1;
    int x = n / 2 + 1;
    while (i <= x)
    {
        int j = 1;
        int k = 1;
        int l = 1;
        while (j <= x - i)
        {
            /* code */
            cout << " ";
            j = j + 1;
        }
        while(k <= i){
            cout << '*';
            k = k + 1;
        }
        while( l <= i - 1){
            cout << '*';
            l = l + 1;
        }
        cout << endl;
        i = i + 1;        
    }

    i = 1;
    int y = n - x;
    while(i <= y){
        int j = 1;
        int k = 1;
        int l = 1;
        while(j <= i){
            cout << " ";
            j = j + 1;
        }
        while(k <= y - i + 1){
            cout << '*';
            k = k + 1;
        }
        while(l <= y - i){
            cout << '*';
            l = l + 1;
        }
        i = i + 1;
        cout << endl;
    }
}