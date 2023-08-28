/*
Reverse Word Wise

Reverse the given string word wise. That is, the last word in given string should 
come at 1st place, last second word at 2nd place and so on. 
Individual words should remain as it is.

For Input :
Welcome to Coding Ninjas
Output:
Ninjas Coding to Welcome

For Input :
Always indent your code
Output :
code your indent Always
*/

#include <iostream>
using namespace std;

int length(char input[]){
    int count = 0;
    for(int i = 0; input[i] != '\0';i++){
        count++;
    }
    return count;
}

void reverse(char input[], int start, int end){
    if(start >= end){
        return;
    }
    while(start <= end){
        char temp = input[start];
        input[start] = input[end];
        input[end] = temp;
        start++;
        end--;
    }
}

void reverseStringWordWise(char input[]){
    int start = 0;
    int l = length(input);
    int i = 0;
    reverse(input, start, l - 1);
    for(; i < l;i++){
        if(input[i] == ' '){
            reverse(input, start, i - 1);
            start = i + 1;
        }
    }
    reverse(input, start, i - 1);
}

int main() {
    char input[1000];
    cin.getline(input, 1000);
    reverseStringWordWise(input);
    cout << input << endl;
}
