// Predict What is Output
#include <iostream>
using namespace std;
int main() {
    int a = 10, b = 20, c = 100;
    if(a <= b || c <= b) {
        cout << "hello" << endl;
    }
    else if(a <= b || a <= c) {
        cout << "hi" << endl;
    }
    else {
        cout << "hey" << endl;
    }
}

// Output is hello because a is less then b So it Doesn't Check Next Conditions in Or Operator