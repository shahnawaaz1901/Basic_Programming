#include <iostream>
using namespace std; 
int main() {
    int a = 10;
    while(a > 5) {
        int a = 1;
        cout << a << " ";
        a--;
    }
}

// Gone to Loop Hell, Because In Every Iteration a is Declare Again and Again 
// and Value of a Never Greater then 5, we Talk About Inner a Outer a Not Affected