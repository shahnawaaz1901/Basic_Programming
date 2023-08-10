#include <iostream>
using namespace std;
int main()
{

    int i = 1;
    while (i < 5)
    {
        if (i == 3)
        {
            continue;
        }
        cout << i << " ";
        i++;
    }
}


// Output is : 1 2 Infinity Loop, Because after third Iteration it Enters in if Condition and in If Condition i not Incremented