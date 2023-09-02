/*
Reverse Each Word

Aadil has been provided with a sentence in the form of a string as a function parameter. 
The task is to implement a function so as to print the sentence such that each word in 
the sentence is reversed. A word is a combination of characters without any spaces.

Example:
Input Sentence: "Hello, I am Aadil!"
Expected Output: ",olleH I ma !lidaA".

For Input :
Welcome to Coding Ninjas
Output :
emocleW ot gnidoC sajniN

For Input :
Always indent your code
Output :
syawlA tnedni ruoy edoc
*/


#include <iostream>
#include <cstring>
using namespace std;

void reverse(char str[], int start, int end){
    while(start <= end){
        swap(str[start],str[end]);
        start++;
        end--;
    }
}
void reverseEachWord(char str[]){
    int l = strlen(str);
    int start = 0;
    int i = 0;
    for(; i < l;i++){
        if(str[i] == ' '){
            reverse(str, start, i - 1);
            start = i + 1;
        }
    }
    reverse(str, start, i - 1);
}

int main() {
    int size = 1e6;
    char str[size];
    cin.getline(str, size);
    reverseEachWord(str);
    cout << str;
}