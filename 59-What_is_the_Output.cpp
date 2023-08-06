#include <iostream>
using namespace std;
int main()
{
    int x = 10;
    int y = 20;
    if (x++ > 10 && ++y > 20)                   // '&&' Operator Require Both Conditions True to Enter in if Condition
    {
        cout << "Inside if ";
    }
    else
    {
        cout << "Inside else ";
    }
    cout << x << " " << y;
}

// Output is : Inside else 11 20, Because x is PostIncremented