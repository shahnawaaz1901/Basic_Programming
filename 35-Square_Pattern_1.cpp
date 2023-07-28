/*
Print Pattern In Following Fasion
N = 4;

4444
4444
4444
4444
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
        while(j <= n){
            cout << n;
            j = j + 1;
        }
        i = i + 1;
        cout << endl;
    }   
}