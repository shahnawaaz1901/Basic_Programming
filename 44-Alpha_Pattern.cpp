/*
Print the following pattern for the given N number of rows.
Pattern for N = 3

A
BB
CCC
*/
                    
#include<iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    int i = 1;
    char x = 'A';
    while(i <= n){
        int j = 1;
        while(j <= i){
            cout << x;
            j = j + 1;
        }
        i = i + 1;
        x = x + 1;
        cout << endl;
    }
}