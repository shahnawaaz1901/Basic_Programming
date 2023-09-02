/*
Remove Consecutive Duplicates

For a given string(str), remove all the consecutive duplicate characters.

Example:
Input String: "aaaa"
Expected Output: "a"

Input String: "aabbbcc"
Expected Output: "abc"

For Input :
aabccbaa
Output :
abcba

For Input :
xxyyzxx
Output :
xyzx
*/

#include <iostream>
#include <cstring>
using namespace std;

void removeConsecutiveDuplicates(char input[]) {
    // Write your code here
    char lc = input[0];
    int k = 1;
    for ( int i = 1 ; i < strlen(input) ; i++){
        if ( input[i] != lc){
            input[k] = input[i];
            lc = input[i];
            k++;
        }
    }
    input[k] = '\0';

}

int main() {
    int size = 1e6;
    char str[size];
    cin >> str;
    removeConsecutiveDuplicates(str);
    cout << str;
}