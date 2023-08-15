/*
Number Star Pattern

Print the following pattern for given number of rows.

For Input : 5
Output :
1234554321
1234**4321
123****321
12******21
1********1

For Input : 4
Output :
12344321
123**321
12****21
1******1
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
        int l = n - i + 1;
        while(j <= l){
            cout << j;
            j++;
        }
        while(k <= (2 * i - 2)){
            cout << '*';
            k++;
        }
        while(l >= 1){
            cout << l;
            l--;
        }
        
        i++;
        cout << endl;
    }
}