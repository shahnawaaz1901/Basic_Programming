/*
Print the following pattern for the given number of rows.

For Input : 4
Output :
   1
  212
 32123
4321234

For Input : 5
Output :
    1
   212
  32123
 4321234
543212345
*/

#include<iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    int i = 1;
    while(i <= n){
        int j = 1;
        int k = 1;
        int l = i;
        int m = 2;
        while(j <= n - i){
            cout << " ";
            j++;
        }
        while(k <= i){
            cout << l;
            l--;
            k++;
        }
        while(m <= i){
            cout << m;
            m++;
        }
        cout << endl;
        i++;
    }
}