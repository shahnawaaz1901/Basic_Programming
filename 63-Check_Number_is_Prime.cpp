#include<iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    bool devide = false;
    for(int i = 2; i <= n - 1;i++){             // Start Checking with 2 because every Number is Devides by One and Loop Runs Until (n - 1) Because Every Number Divide Itself
        if(n % i == 0){                         // Number is Devided or Not
            devide = true;
        }
    }
    if(!devide){
        cout << "Number is Prime " << endl;
    }else{
        cout << "Number is Not Prime" << endl;
    }
}