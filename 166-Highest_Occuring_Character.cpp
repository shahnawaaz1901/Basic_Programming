/*
Highest Occuring Character

For a given a string(str), find and return the highest occurring character.

Example:
Input String: "abcdeapapqarr"
Expected Output: 'a'

Since 'a' has appeared four times in the string which happens to be the highest frequency
character, the answer would be 'a'.
If there are two characters in the input string with the same frequency, 
return the character which comes first.

For Input :
abdefgbabfba
Output :
b

For Input :
xy
Output:
x
*/

#include <iostream>
#include <cstring>
using namespace std;

char highestOccurringChar(char str[]){
    int freq[256] = {0};
    for(int i = 0; str[i] != '\0';i++){
        freq[int(str[i])]++;
    }
    int max = 0;
    char ch;
    for(int i = 0; i < 256;i++){
        if(freq[i] > max){
            max = freq[i];
            ch = i;
        }
    }
    return ch;
    
}

int main() {
    int size = 1e6;
    char str[size];
    cin >> str;
    cout << highestOccurringChar(str);
}