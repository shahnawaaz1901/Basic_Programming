/*
Print Pattern In triAngular Fashion
for N = 4

1
22
333
4444

*/

#include<iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    int i = 1;
    while(i <= n){
        int k = 1;
        while(k <= i){
            cout << i ;
            k = k + 1;
        }
        cout << endl;
        i = i + 1;
    }
}