/* You Need to Take input From User N and Create a Function Which Prints Number from 1 to N*/
#include<iostream>
using namespace std;

// If You Not Return Any Value then instead of type 'return output data type' write void
void printNumber(int n){
    for(int i = 1;i <= n;i++){
        cout << i << " ";
    }
    cout << endl;
}
int main(){
    int n;
    cin >> n;

    printNumber(n);
    /*
    int i = 1;
    while(i <= n){
        cout << i << " ";
        i++;
    }
    cout << endl;
    */
}