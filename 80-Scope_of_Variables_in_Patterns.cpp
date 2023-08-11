#include<iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    int i = 1;              // i is Accessable AnyWhere in Code
    while(i <= n){                      
        int j = 1;          // j is Accessable Only in While Loop Whether Inner and Outer in Both j is Accessable 
        while(j <= i){
            int k = 1;      // k is Accessable Only in Inner Loop
            cout << j ;
            j++;
        }
        cout << endl;
        i++;
    }
}