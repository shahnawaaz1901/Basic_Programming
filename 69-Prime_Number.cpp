// Check Number is Prime or Not
#include<iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    bool devide = false;
    for(int i = 2; i < n ;i++){
        if(n % i == 0){
            devide = true;
            break;              // break stops just upper loop
        }
    }
    if(devide){
        cout << "Number is Not Prime " << endl;
    }else{
        cout << "Number is Prime " << endl;
    }
}