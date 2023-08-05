/*
Print the following pattern for the given number of rows.

Pattern for N = 5
    1
   232
  34543
 4567654
567898765

Pattern for N = 4

   1
  232
 34543
4567654

*/

#include<iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    int i = 0;
    while(i <= n){
        int j = 1;
        while(j <= n - i){
            cout << " ";
            j = j + 1;
        }
        j = 1;
        int k = i;
        while (j <= i)
        {
            /* code */
            cout << k;
            k = k + 1;
            j = j + 1;
        }
        k = k - 2;
        while(k >= i){
            cout << k;
            k = k - 1;
        }
        cout << endl;
        i = i + 1;

    }
}