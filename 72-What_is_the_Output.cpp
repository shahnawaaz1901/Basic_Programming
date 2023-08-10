#include <iostream>
using namespace std;
int main()
{
    int i = 1;
    while (i < 5)
    {
        if (i == 3)
        {
            break;
        }
        cout << i << " ";
        i++;
    }
}

//Output is : 1 2 , Because in third Iteration it Enters in if Condition and break Statement Stop Loop