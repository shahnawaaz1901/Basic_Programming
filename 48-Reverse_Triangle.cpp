/*

Print Pattern in Following Fashion :

For N = 4

   *
  **
 ***
****

For N = 5

    *
   **
  ***
 ****
*****
*/

#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int i = 1; // If You Take i = 0 then you need to change condition from less then equal to only less then
    while (i <= n)
    {
        int spaces = 1;
        while (spaces <= n - i)
        {
            cout << " "; // Print Spaces
            spaces = spaces + 1;
        }
        int stars = 1;
        while (stars <= i)
        {
            cout << '*';
            stars = stars + 1;
        }

        i = i + 1;
        cout << endl;
    }
}