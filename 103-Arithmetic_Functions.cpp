/*You Need to Create 4 Functions Add, Substract, Multiply and Divide*/
#include<iostream>
using namespace std;

int add(int a, int b){
    return a + b;
}
int substract(int a, int b){
    return a - b;
}
int divide(int a, int b){
    return a/b;
}
int multi(int a, int b){
    return a * b;
}   

int main(){
    int a, b;
    cin >> a >> b;
    int adding = add(a,b);
    int multiply = multi(a, b);
    int substraction = substract(a, b);
    int divided = divide(a, b);

    cout << "Addition : " << adding << endl;
    cout << "Substraction : " << substraction << endl;
    cout << "Multiplication : " << multiply << endl;
    cout << "Division : " << divided << endl;
}