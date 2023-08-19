#include<iostream>
using namespace std;

int func(int a){
    a += 10;
    return a;
}

int main() {
    int a = 5;
    func(a);
    cout << a;
}
// Output Is : 5

/*
Solution Description : 
Inside 'func', a new local variable 'a' is created and assigned the value of the argument (5).


The local 'a' is incremented by 10, making it 15, and then returned.


The returned value is not stored or used, so the 
original  'a' in the main function remains unchanged.


So the output will be 5.
*/