/*
Print Number Pattern in This Fashion
For n = 4
   1
  12
 123
1234

For n = 6
     1
    12
   123
  1234
 12345
123456
*/

#include<iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    int i = 1;
    while(i <= n){
        int j = 1;
        int k = 1;
        while(j <= n - i){
            cout << " ";
            j++;
        }
        while(k <= i){
            cout << k;
            k++;
        }
        i++;
        cout << endl;
    }
}
