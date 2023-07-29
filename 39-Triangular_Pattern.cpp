/*
Print Pattern In triAngular Fashion
for N = 4

1
23
456
78910

*/

#include<iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    int i = 1;
    int j = 1;
    while(i <= n){
        int k = 1;
        while(k <= i){
            cout << j;
            k = k + 1;
        }
        i = i + 1;
        cout << endl;
    }
}