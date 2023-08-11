/*Check error*/
 
// Will following code generate error ?

#include <iostream>
using namespace std;
int main() {
    int a = 10;
    if(a > 5) {
        int a = 100;
    }
    cout << a << endl;
}

// No Error is Generated Because at Line 12 a is Accessable Because a is Also Declare in that Scope
