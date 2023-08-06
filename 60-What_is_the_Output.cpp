#include <iostream>
using namespace std;
int main(){
    int x = 10;
    int y = 20;
    if ( x++ > 10 || ++y > 20 )           // '||' operator Requires Only atleast One Condition True to Enter in if Condition
    // In OR ('||') Operator Compiler Checks Both Condition Even First Condition is False, Next Condition Also Checked

    {
        cout << "Inside if ";
    }
    else
    {
        cout << "Inside else ";
    }
    cout << x << " " << y;
}

// Output is : Inside if 11 21, Because y is PreIncremented