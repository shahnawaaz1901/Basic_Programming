#include <iostream>
using namespace std;
int main()
{
    int x = 10;
    int y = 20;
    if (x++ > 10 && ++y > 20)                   // '&&' Operator Require Both Conditions True to Enter in if Condition
    // In And Operator ('&&') Second Condition Only Checks if First Condition is true, if First Condition is True then compiler go for Check Second Condition
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