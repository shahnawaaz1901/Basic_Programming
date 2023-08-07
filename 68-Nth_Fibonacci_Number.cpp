/*
The n-th term of Fibonacci series F(n), where F(n) is a function, is calculated using the following formula -
    F(n) = F(n - 1) + F(n - 2), 
    Where, F(1) = 1, F(2) = 1



For N = 6

Output : 8

Explanation: The number is ‘6’ so we have to find the “6th” Fibonacci number.
So by using the given formula of the Fibonacci series, we get the series:    
[ 1, 1, 2, 3, 5, 8, 13, 21]
So the “6th” element is “8” hence we get the output.

Expected time complexity :
The expected time complexity is O(n).

*/
#include<iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    int a = 0;
    int b = 1;
    for(int i = 1; i <= n;i++){
        int c = a + b;
        a = b;
        b = c;
    }
    cout << n <<"th Fibonacci Number Is : " << a << endl;
}