#include<iostream>
using namespace std;

// Argument Variable of Function is Only Valid in the that Function not Accessable Outside the Function
int factorial(int n){
    // cout << a << endl;                   // a is Not Accessable Only Accessable in main Function
    int ans = 1;
    for(int i = 1;i <= n;i++){
        ans *= i;
    }
    return ans;
}

// cout << n << endl;                       // n is not Accessable

int main(){
    int a;
    cin >> a;
    int output = factorial(a);              // Call Function factorial
    // cout << ans << endl;                 // ans not Accessable Only Accessable in factorial Function
    cout << output << endl;
}