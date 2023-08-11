/*Check error*/

//Will following code generate error ?
#include <iostream>
using namespace std;
int main() {
    int a = 10;
    if(a > 5) {
        int b = 10;
    }
    //cout << b << endl;              // Not Accessable
}

// At Line Number 11 cout Statement Generate Error Because b is Not Accessable Outside if Condition