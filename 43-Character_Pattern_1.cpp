/*
Print Character Pattern Into this Fashion
for N = 4

ABCD
ABCD
ABCD
ABCD

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
        char k = 'A';
        while(j <= n){
            cout << k;
            k = k + 1;
            j = j + 1;
        }
        cout << endl;
        i = i + 1;
    }
}