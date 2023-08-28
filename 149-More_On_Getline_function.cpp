#include<iostream>
using namespace std;

int count(char input[]){
    int count = 0;
    for(int i = 0; input[i] != '\0';i++){
        count++;
    }
    return count;
}

int main(){
    char input[500];
    /* 
        If We Pass Less Size in getline function then it takes input Only in 
        size - 1 Character 1 space reserve for NULL Character
    */
    /* 
        Last Argument is delimeter which is Optional. This delimeter Uses to
        Indicate that when input taken is breaks.By default value of
        delimeter is '\n' which means taking input is break on enter keyword
        if We Want we Can change It.
    */
    // If We Take input Ashu Ansari only Ashu Ansar input is taken
    cin.getline(input, 100, 'i');
    cout << "Count Is : " << count(input) << endl;
    cout << input << endl;
}