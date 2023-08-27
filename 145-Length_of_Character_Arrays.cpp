#include<iostream>
using namespace std;

int length(char input[]){
    int count = 0;
    for(int i = 0; input[i] != '\0';i++){
        count++;
    }
    return count;
}

int main(){
    char input[1000];
    cin >> input;                   // if We Give abcde which length is 5
    /*
        input[3] = '\0';            // length Become 3, Because Length is Calculated until NULL, Null Works As Terminator
    */
    cout << "Length of String Is : " << length(input) << endl;
}