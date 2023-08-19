#include<iostream>
using namespace std;

int square(int a){
    int ans = a * a;
    return ans;
}

int main() {
    int a = 4;
    a = square(a);
    cout << a;
}
// Output Is : 16

/*
Solution Description
The function "square" is called with "a" as an 
argument, which calculates the square of 4 (4*4) and returns 16.
The returned value (16) is assigned back to "a".
So the output will be 16.
8
*/