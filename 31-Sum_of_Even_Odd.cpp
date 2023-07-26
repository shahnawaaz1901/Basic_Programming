/*
Write a program to input an integer 'n' and print the sum of all its even digits and sum of all its odd digits separately.


Digits mean numbers, not the places! That is, if the given integer is "132456", even digits are 2, 4 and 6 and odd digits are 1, 3 and 5.


Example :
Input: 'n' = 132456

Output: 12 9

Explanation:
The sum of even digits = 2 + 4 + 6 = 12
The sum of odd digits = 1 + 3 + 5 = 9

Sample Input 1:
132456

Sample Output 1:
12 9


Explanation of sample input 1 :
The sum of even digits = 2 + 4 + 6 = 12
The sum of odd digits = 1 + 3 + 5 = 9


Sample Input 2:
552245


Sample Output 2:
8 15

*/

#include <iostream>
using namespace std;
int main (){
    int n ;
    cin >> n;

    int sumOdd = 0;
    int sumEven = 0;
    while ( n != 0){
		
        int x = n % 10;
        if ( x % 2 == 0){
            sumEven = sumEven + x;
        }
        else {
            sumOdd = sumOdd + x;
        } 

        n = n/10;
    }
    cout << sumEven << " " << sumOdd << endl;
}    
