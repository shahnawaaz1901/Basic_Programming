/*
Remove character

For a given a string(str) and a character X, write a function to remove all the 
occurrences of X from the given string.
The input string will remain unchanged if the given character(X) doesn't exist in 
the input string.

For Input :
aabccbaa
a
Output :
bccb

For Input :
xxyyzxx
y
Output :
xxzxx
*/

#include <iostream>
#include <cstring>
using namespace std;

void removeAllOccurrencesOfChar(char str[], char c){
    int j = 0;
    for(int i = 0;str[i] != '\0';i++){
        if(str[i] != c){
            str[j] = str[i];
            j++;
        }
    }
    str[j] = '\0';
}

int main() {
    int size = 1e6;
    char str[size];
    cin.getline(str, size);
    char c;
    cin >> c;
    removeAllOccurrencesOfChar(str, c);
    cout << str;
}