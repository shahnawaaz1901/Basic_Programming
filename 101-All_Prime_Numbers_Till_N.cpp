// Take an Input n From User and Print All Prime Numbers From 1 to N

#include<iostream>
using namespace std;

bool isPrime(int n){
    if(n == 1){
        return false;
    }
    for(int i = 2; i < n;i++){
        if(n % i == 0){
            return false;               // Directly Return From the Loop and From the Function
        }
    }
    return true;
}


int main(){
    int n;
    cin >> n;
    // Using Function
    for(int i = 1;i <= n;i++){
        if(isPrime(i)){
            cout << i << " Is Prime " << endl;
        }else{
            cout << i << " Is Not Prime " << endl;
        }
    }
    /*
    // WithOut Using Function
    for(int i = 1; i <= n;i++){
        bool d = false;
        for(int j = 2; j < i;j++){
            if(i % j == 0){
                d = true;
                break;
            }
        }
        if(d){
            cout << i << " Not Prime " << endl;
        }else{
            if(i == 1){
                cout << i << " Not Prime " << endl;
            }else{
                cout << i << " Is Prime " << endl;
            }
        }
    }
    */
}