/* In C++ Two Unary Operators Exist */
/* Unary Means Only A Single Operand is Used in Operation*/
#include<iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    
    // n = n + 1;                   // Instead of Doing This

    // You Can Write
    n++;                            // Increment Operator
    cout <<"After Increment : " << n << endl;
    // n = n - 1;                   // Instead of Doing This

    // You Can Write
    n--;                            // Decrement Operator
    cout << "After Decrement : " << n << endl;
}