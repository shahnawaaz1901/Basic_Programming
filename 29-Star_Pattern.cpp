/*
Print Pattern in Following Fashion
Sample Input 1 :
3
Sample Output 1 :
   *
  *** 
 *****

Sample Input 2 :
4
Sample Output 2 :
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
    int i = 0;
    while(i <= n){
        int j = 1;
        while(j <= n - i){
            cout << ' ';
            j++;
        }
        int k = 1;
        while(k <= i){
            cout << '*';
            k++;
        }
        int l = i;
        while(l >= 2){
            cout << '*';
            l--;
        }
        i++;
        cout << endl;
    }
}