/*
Print Pattern In Following Fasion
N = 4;

1234
1234
1234
1234
*/

#include<iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    int i = 1;
    while (i <= n)
    {
        /* code */
        int j = 1;
        int k = 1;
        while(j <= n){
            cout << k;
            k = k + 1;
            j = j + 1;
        }
        i = i + 1;
        cout << endl;
    }   
}