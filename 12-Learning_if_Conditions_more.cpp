#include<iostream>
using namespace std;
int main(){
    int a, b;
    cin >> a >> b;
    if(a > b){
        cout << "a Is Greater" << endl;
    }else if(a < b){
        cout << "b Is Greater" << endl;
    }else{
        cout << "a And b Are Equal" << endl;
    }
}