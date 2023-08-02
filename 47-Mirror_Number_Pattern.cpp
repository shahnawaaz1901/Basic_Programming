/*
Print the following pattern for the given N number of rows.


For N = 3

  1 
 12
123

for N = 4

   1 
  12
 123
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
        while(j <= n - i){
            cout << " ";
            j = j + 1;
        }
        j = 1;
        while(j <= i){
            cout << j ;
            j = j + 1;
        }
        cout << endl;
        i = i + 1;
    }
    
}