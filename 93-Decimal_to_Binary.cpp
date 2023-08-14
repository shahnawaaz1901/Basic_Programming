/*
Decimal to Binary

Given a decimal number (integer N), convert it into binary and print.
Note :- 
The given input number could be large, so the corresponding binary number 
can exceed the integer range. So you may want to take the answer as long for CPP and Java.
Note for C++ coders: Do not use the inbuilt implementation of "pow" function. 
The implementation of that function is done for 'double's and it may fail when 
used for 'int's, 'long's, or 'long long's. Implement your own "pow" function to work for 
non-float data types.


For Input : 12
Output : 1100

For Input : 7
Output : 111

*/

#include<iostream>
using namespace std;
int main(){
    int decimalNum;
    cin >> decimalNum;
    // In Binary To Decimal or Decimal To Binary Use long Because Binary Number Exceed Limit of int
    long binaryNum = 0;
    long placeValue = 1;
    while(decimalNum){
        int remainder = decimalNum % 2;
        decimalNum /= 2;
        binaryNum = (remainder * placeValue) + binaryNum;
        placeValue *= 10;
    }
    cout << binaryNum << endl;
}