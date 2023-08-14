/*
Reverse of a number

Write a program to generate the reverse of a given number N.
Print the corresponding reverse number.

Note : If a number has trailing zeros, then its reverse will not include them.
    For e.g., reverse of 10400 will be 401 instead of 00401.



For Input : 1234
Output : 4321

For Input : 1980
Output : 891

*/

#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int reverse = 0;
    while (n != 0)
    {
        int digit = n % 10;
        if (digit == 0 && reverse == 0)         // Check Digit is 0 and Also Reverse is Zero Because Starting Number with Zero Not Affected
        {
            n /= 10;
            continue;
        }
        reverse = reverse * 10 + digit;
        n /= 10;
    }
    cout << reverse << endl;
}
