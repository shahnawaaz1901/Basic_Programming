#include <iostream>
using namespace std;
int main()
{
    int x = 10, y = 1;
    if (++x > 10 || x / 0 == 0)                 // Here x is Incremented Using PreIncrement, So 11 is Compared
        cout << y;
    else
        cout << x;
}

// Output is : 1