/*
Check Palindrome

Given a string, determine if it is a palindrome, considering only alphanumeric 
characters.
Palindrome
A palindrome is a word, number, phrase, or other sequences of characters which 
read the same backwards and forwards.
Example:
If the input string happens to be, "malayalam" then as we see that this word can 
be read the same as forward and backwards, it is said to be a valid palindrome.

For Input :
abcdcba
Output :
true 

For Input:
coding
Output :
false

*/

#include <iostream>
using namespace std;

int length(char str[]){
    int count = 0;
    for(int i = 0; str[i] != '\0';i++){
        count++;
    }
    return count;
}

bool checkPalindrome(char str[]) {
    int len = length(str);                  // find length for last index
    int startIndex = 0;
    int lastIndex = len - 1;
    while(startIndex <= lastIndex){
        if(str[startIndex] != str[lastIndex]){
            return false;
        }
        startIndex++;
        lastIndex--;
    }
    return true;
}
int main() {
    int size = 1e6;
    char str[size];
    cin >> str;
    cout << (checkPalindrome(str) ? "true" : "false");
}