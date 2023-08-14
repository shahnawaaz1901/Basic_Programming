/*
Write a program that asks the user for a number N and a choice C.
And then give them the possibility to choose between computing the sum and
computing the product of all integers in the range 1 to N (both inclusive).

If C is equal to -
 1, then print the sum
 2, then print the product
 Any other number, then print '-1' (without the quotes)

For Input : 10 1
Output : 55

For Input : 10 2
Sample Output : 3628800

For Input  : 10 4
Sample Output : -1
*/

#include <iostream>
using namespace std;
int main()
{
    int n, c;
    cin >> n >> c;
    // Don't Declare Variable in Switch Cases Always Declare Outside
    int sum = 0;
    int multi = 1;
    switch (c)
    {
    case 1:
        for (int i = 1; i <= n; i++)
        {
            sum += i;
        }
        cout << sum << endl;
        break;
    case 2:
        for (int i = 1; i <= n; i++)
        {
            multi *= i;
        }
        cout << multi << endl;
        break;
    default:
        cout << -1 << endl;
        break;
    }
}