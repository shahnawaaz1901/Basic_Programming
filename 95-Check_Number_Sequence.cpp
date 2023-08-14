/*
Check Number sequence

You are given S, a sequence of n integers i.e. S = s1, s2, ..., sn.
Compute if it is possible to split S into two parts : s1, s2, ..., si
and si+1, si+2, ….., sn (0 <= i <= n) in such a way that the first part is strictly decreasing
while the second is strictly increasing one.

Note :- We say that x is strictly larger than y when x > y.
So, a strictly increasing sequence can be 1 4 8. However, 1 4 4 is NOT a
strictly increasing sequence.


That is, in the sequence if numbers are decreasing, they can start increasing at one point.
Thereafter, they cannot decrease at any point further.
Sequence made up of only increasing numbers or only decreasing numbers is a valid sequence.
So, in both the cases, print true.


You just need to print true/false. No need to split the sequence.

Input format :
Line 1 : Integer 'n'
Line 2 and Onwards : 'n' integers on 'n' lines(single integer on each line)

Output Format :
"true" or "false" (without quotes)

For Input :
5
9
8
4
5
6
Output :
true

For Input :
3
1
2
3
Output 2 :
true

For Input :
3
8
7
7
Output :
false

Explanation for Sample Format 3 :0
8 7 7 is not strictly decreasing, so output is false.
For Input :
6
8
7
6
5
8
2
Output :
false

Explanation for Sample Input :
The series is :
8 7 6 5 8 2

It is strictly decreasing first (8 7 6 5). Then it's strictly increasing (5 8).
But then it starts strictly decreasing again (8 2). Therefore, the output for this test case
is 'false'
*/

#include <iostream>
using namespace std;
int main()
{
    int n, curr, prev;
    cin >> n >> prev;
    n--; // Because One Number input is taken
    bool isDecreasing = true;
    bool sequenceDone = true;
    while (n)
    {
        cin >> curr; // second Number input
        if (curr == prev)
        {
            sequenceDone = false;
            cout << "false" << endl;
            break;
        }
        else if (curr > prev)
        {
            if (isDecreasing)
            {
                isDecreasing = false;
            }
        }
        else
        {
            if (!isDecreasing)
            {
                sequenceDone = false;
                cout << "false" << endl;
                break;
            }
        }
        prev = curr;
        n--;
    }
    if (sequenceDone)
    {
        cout << "true" << endl;
    }
}