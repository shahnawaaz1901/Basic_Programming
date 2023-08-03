/*
Print Star Pattern In Following Fashion
 
For N = 4

   *
  ***
 *****
*******
*/

#include<iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    int i = 1;
    while(i <= n){
        int j = 1;
        while(j <= n - i){
            cout << " ";
            j = j + 1;
        }
        j = 1;
        while (j <= i){
            /* code */
            cout << '*';
            j = j + 1;
        }

        j = i - 1;
        while(j >= 1){
            cout << '*';
            j = j - 1;
        }
        
        i = i + 1;
        cout << endl;
    }
}