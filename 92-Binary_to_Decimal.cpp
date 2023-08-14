/*
Binary to decimal

Given a binary number as an integer N, convert it into decimal and print.

For Input : 1100
Output : 12

For Input : 111
Output : 7
*/

#include<iostream>
#include<math.h>
using namespace  std;
int main()
{
    int binaryNum;
    cin >> binaryNum;
    int num = 0;
    int placeValue = 0;
    while(binaryNum){
        int digit = binaryNum % 10;
        num = num + (pow(2,placeValue) * digit);
        binaryNum /= 10;
        placeValue++;
    }
    cout << num << endl;
}