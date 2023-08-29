#include<iostream>
#include<cstring>
using namespace std;

void printAllPrefixes(char input[]){
    int length = strlen(input);
    for(int i = 0; input[i] != '\0';i++){
        for(int j = 0; j <= i;j++){
            cout << input[j];
        }
        cout << endl;
    }
}
int main(){
    char input[100];
    cin >> input;
    printAllPrefixes(input);
}