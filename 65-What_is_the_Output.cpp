#include <iostream>
using namespace std;
int main()
{

    for (int i = 1; i < 5; i = i + 1)
    {
        cout << i << " ";
        i = i - 1;
    }
}


// Output is : Infinite or Loop Hell Because in Every Iteration i is Increment or decrement So Value of i is Not Affected it Remain Same