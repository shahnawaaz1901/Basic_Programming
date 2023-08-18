/*
Fibonacci Number

Given a number N, figure out if it is a member of fibonacci series or not. 
Return true if the number is member of fibonacci series else false.

Fibonacci Series is defined by the recurrence
    F(n) = F(n-1) + F(n-2)
where F(0) = 0 and F(1) = 1


For Input : 5
Output : true

For Input : 14
Output : false    
*/
#include<iostream>
using namespace std;

bool isMemberOfFibonacci(int n){
    int a = 0;
    int b = 1;
    while(a <= n){
        if(a == n){
            return true;
        }
        int c = a + b;
        a = b;
        b = c;
    }
    return false;
}
int main(){
    int n;
    cin >> n;
    if(isMemberOfFibonacci(n)){
        cout << "True" << endl;
    }else{
        cout << "False" << endl;
    }
}