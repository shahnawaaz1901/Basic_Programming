/*
Print Pattern in Following Fashion :-

For n = 6
     1
    121
   12321
  1234321
 123454321
12345654321

For n = 3

  1
 121
12321

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
        while (j <= i)
        {
            cout << j;
            j = j + 1;
        }

        int k = i - 1;
        // int k = j - 2;                   //You Can Use This Also 
        while(k >= 1){
            cout << k;
            k = k - 1;
        }
        i = i + 1;
        cout << endl;
    }
}

