/*
Print Pattern in This Fashion 

For N = 4

****
***
**
*

For N = 3
***
**
*

*/
#include<iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    int i = 1;
    while(i <= n){
        int stars = 1;
        while(stars <= n - i + 1){
            cout << '*';
            stars = stars + 1;
        }
        i = i + 1;
        cout << endl;
    }
}