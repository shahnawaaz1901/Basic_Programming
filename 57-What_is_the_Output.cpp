#include <iostream>
using namespace std;
int main()
{   
    int x = 15;
    int y = x++;                // y Stores 15 but value of x is Incremented by PostIncrement
    int z = ++x;                // z Stores 17 Because x is Incremented Using PreIncrement
    cout << y << " " << z;
}

// Output is : 15 17 
