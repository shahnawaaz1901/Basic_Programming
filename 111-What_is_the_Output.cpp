#include<iostream>
using namespace std;

void doubleValue(int a) {
    a = a * 2;
}
int main() {
    int a = 8;
    doubleValue(a);
    cout << a;
}


// Output Is : 8

/*
Solution Description
Inside the doubleValue function, the value of 'a' is 
doubled, but it only affects the local copy of 'a' in the function.


The value of 'a' in the main function remains 
unchanged.


So the output for this will be 8.
*/