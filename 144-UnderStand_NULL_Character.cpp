#include<iostream>
using namespace std;
int main(){
    char input[100];
    cout << "Enter Name : ";
    cin >> input;
    // If We Give Input abcd and if we put '\0' at index 2 then print statement print until null Character
    // So print only ab
    input[2] = '\0';
    cout << "Name Is : " << input << endl;    
}