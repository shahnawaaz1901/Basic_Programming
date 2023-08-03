/*
Print Pattern in This Fashion 

For N = 4

4444
333
22
1

For N = 3
333
22
1

*/

#include<iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    int i = 1;
    int x = n;
    while(i <= n){
        int j = 1;
        while(j <= n - i + 1){
            cout << x;
            j = j + 1;
        }
        x = x - 1;
        i = i + 1;
        cout << endl;
    }
}