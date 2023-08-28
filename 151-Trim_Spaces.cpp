/*
Trim Spaces

Given an input string S that contains multiple words, you need to remove all the spaces 
present in the input string.
There can be multiple spaces present after any word.

For Input :
abc def g hi
Output :
abcdefghi
*/

#include<iostream>
using namespace std;

int length(char input[]){
    int count = 0;
    for(int i = 0; input[i] != '\0';i++){
        count++;
    }
    return count;
}

void trimSpaces(char input[]){
    int l = length(input);
    int k = 0;
    for(int i = 0; i < l;i++){
        if(input[i] == ' '){
            continue;
        }
        input[k] = input[i];
        k++;
    }
    input[k] = '\0';
}

int main(){
    char input[100];
    cin.getline(input, 100);
    trimSpaces(input);
    cout << "After Triming Space : " << input << endl;
}