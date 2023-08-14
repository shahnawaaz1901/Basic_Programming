/*

Terms of AP

Write a program to print first x terms of the series 3N + 2 which are not multiples of 4.
For Input : 10
Output : 5 11 14 17 23 26 29 35 38 41
For Input : 4
Output : 5 11 14 17

*/

#include<iostream>
using namespace std;
int main(){
    int x;
    cin >> x;
    for(int i = 1;;i++){
        int series = 3 * i + 2;
        if(series % 4 != 0){
            cout << series << ' ';
            x--;
            if(x == 0){
                break;
            }
        }
    }
}