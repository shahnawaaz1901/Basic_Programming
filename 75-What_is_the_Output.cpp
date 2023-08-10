#include <iostream>
using namespace std;
int main()
{

    int i = 1;
    while (i < 3)
    {
        int j = 0;
        while (j < 5)
        {
            j++;
            if (j == 3)
            {
                continue;
            }
            cout << j << " ";
        }
        i++;
    }
}

// Output is : 1 2 4 5 1 2 4 5 , Because 3 is Not Printed Because Continue Skip the Iteration of 3