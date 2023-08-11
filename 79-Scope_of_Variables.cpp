
#include <iostream>
using namespace std;
int main()
{
    int n = 10;
    int i = 1;
    // int k;       //Like this to Access Outside from While Loop
    while (i <= n)
    {
        /* if You Want that Scope of Variable k outside the while loop then You Need to Declare k 
        outside the while loop HowEver You Can Update value of k in while Loop which is Legal*/
        int k = 35; // k Is Only Accessable in While Loop
        i++;
    }
    // cout << k << endl;              // Can Not Access k Outside the while Loop
}