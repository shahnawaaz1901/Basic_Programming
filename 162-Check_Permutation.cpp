/*
Check Permutation

For a given two strings, 'str1' and 'str2', check whether they are a permutation 
of each other or not.
Permutations of each other
Two strings are said to be a permutation of each other when either of the string's 
characters can be rearranged so that it becomes identical to the other one.

Example: 
str1= "sinrtg" 
str2 = "string"

The character of the first string(str1) can be rearranged to form str2 and hence 
we can say that the given strings are a permutation of each other.

Note:
All the characters in the input strings would be in lower case.

For Input :
abcde
baedc
Output :
true

For Input :
abc
cbd
Output :
false
*/

#include <iostream>
#include <cstring>
using namespace std;

/* Approach 1 */
bool isPermutation(char input1[], char input2[]) {
    int len1 = strlen(input1);
    int len2 = strlen(input2);
    if(len1 != len2){
        return false;
    }
    for(int i = 0; i < len1;i++){
        char ch = input1[i];
        bool match = false;
        for(int j = 0;j < len2;j++){
            if(ch == input2[j]){
                match = true;
                break;
            }
        }
        if(!match){
            return false;
        }
    }
    return true;
}

/* Approach 2 */
bool isPermutation(char input1[], char input2[]) {
    int freqencyArray[256] = {0};
    for(int i = 0; input1[i] != '\0';i++){
        freqencyArray[int(input1[i])]++;
    }
    for(int i = 0; input1[i] != '\0';i++){
        freqencyArray[int(input2[i])]--;
    }
    for(int i = 0; i < 256;i++){
        if(freqencyArray[i] != 0){
            return false;
        }
    }
    return true;
    
}

int main() {
    int size = 1e6;
    char str1[size];
    char str2[size];
    cin >> str1 >> str2;
    cout << (isPermutation(str1, str2) ? "true" : "false");
}