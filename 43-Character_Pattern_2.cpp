/*
Print Character Pattern Into this Fashion
for N = 4

ABCD
EFGH
IJKL
MNOP

*/

#include<iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    char x = 'A';
    int i = 1;
    while(i <= n){
        int j = 1;
        while(j <= n){
            cout << x;
            x = x + 1;
            j = j + 1;
        }
        cout << endl;
        i = i + 1;
    }
}