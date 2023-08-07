#include <iostream>
using namespace std;
int main()
{

    for (int i = 0; i < 5; i = i + 1)
    {
        if (i == 2)
            continue;
        cout << i << " ";
    }
}

//Output is : 0 1 3 4, Because in i = 2 it enters in if Condition and Skip the iteration