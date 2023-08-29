/*
Print All Substrings

For a given input string(str), write a function to print all the possible substrings.
Substring
A substring is a contiguous sequence of characters within a string. 
Example: "cod" is a substring of "coding". Whereas, "cdng" is not as the characters 
taken are not contiguous

For Input :
abc
Output :
a 
ab 
abc 
b 
bc 
c 

For Input :
co
Output :
c 
co 
o
*/

#include<iostream>
#include<cstring>
using namespace std;

void printSubstrings(char input[]){
    int l = strlen(input);
    for(int i = 0; i < l;i++){
        for(int j = i; j < l;j++){
            for(int k = i; k <= j;k++){
                cout << input[k];
            }
            cout << endl;
        }
    }
}
int main(){
    char input[100];
    cin >> input;
    printSubstrings(input);
}