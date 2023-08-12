#include <iostream>
using namespace std;
int main() {
    int a = 10;
    if(a > 5) {
        int a = 100;
    }
    else {
        int a = 110;
    }
    cout << a << endl;
}

// Output is 10, Because No Metters it if and else condition is true in 
// that scope of a is only valid in if and else