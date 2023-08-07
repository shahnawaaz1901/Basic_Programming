#include <iostream>
using namespace std;
int main()
{
    for (int i = 0; i < 5; i = i + 1)
    {
        cout << i << " ";
        i = i + 1;
    }
}

// Output is : 0 2 4 , Because i is Increment two Times in One Iteration