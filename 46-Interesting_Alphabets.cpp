/*
Print the following pattern for the given number of rows.
Pattern for N = 5


E
DE
CDE
BCDE
ABCDE

*/

#include<iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    int i = 1;
    while( i <= n){
        char x = 'A' + n - i;
        int j = 1;
        while(j <= i){
            cout << x ;
            j = j + 1;
            x = x + 1;
        }
        i = i + 1;
        cout << endl;
    }
    // while(i <= n){
    //     int j = 1;

    //     i = i + 1;
    //     cout << endl;
    // }
}