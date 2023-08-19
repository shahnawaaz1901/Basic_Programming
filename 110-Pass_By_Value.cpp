#include<iostream>
using namespace std;
void increment(int a){
    a++;                // This Increment Value is Changed Only In this Function
}
int main(){
    int a;
    cin >> a;
    cout << "Before Function Calling : " << a << endl;
    // a is Pass By Value So that Any Changes in Value of a is Only Valid in increment Function 
    // Because in Pass By Value Argument in Function is a New Variable and Value of that Variable is Value which we Passed
    // So that in Both Variable is Different and Change in Function Not Affect in main Function
    increment(a);
    cout << "Before Function Calling : " << a << endl;

}