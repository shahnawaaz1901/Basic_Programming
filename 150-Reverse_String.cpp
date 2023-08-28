#include<iostream>
using namespace std;

int length(char input[]){
    int count = 0;
    for(int i = 0; input[i] != '\0';i++){
        count++;
    }
    return count;
}

void reverse(char input[]){
    int startIndex = 0;
    int endIndex = length(input) - 1;
    while(startIndex <= endIndex){
        swap(input[startIndex],input[endIndex]);
        startIndex++;
        endIndex--;
    }
}

int main(){
    char input[100];
    cin.getline(input, 100);
    reverse(input);
    cout << "Reverse String Is : " << endl <<input << endl;
}