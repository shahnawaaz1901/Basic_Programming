/*
Square Root (Integral)

Given a number N, find its square root. You need to find and print only the integral part 
of square root of N.
For eg. if number given is 18, answer is 4.
Input format :
For Input : 10
Output : 3

For Input : 4
Output 2 : 2

*/
#include<iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    int ans;
    int root;
    for(int i = 0;;i++){
        ans = i * i;
        if(ans == n){
            root = i;
            break;
        }else if(ans > n){
            root = i - 1;
            break;
        }
    }
    cout << root << endl;
}