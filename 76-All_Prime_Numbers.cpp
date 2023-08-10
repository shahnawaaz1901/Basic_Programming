/*
All Prime Numbers

Given an integer N, print all the prime numbers that lie in the range 2 to N (both inclusive).
Print the prime numbers in different lines.
For N = 9

2
3
5
7

For N = 20

2
3
5
7
11
13
17
19

*/

#include<iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    for(int i = 2; i <= n;i++){
        bool devide = false;
        for(int j = 2; j < i;j++){
            if(i % j == 0){
                devide = true;
                break;
            }
        }
        if(!devide){
            cout << i << endl;
        }
    }
}
