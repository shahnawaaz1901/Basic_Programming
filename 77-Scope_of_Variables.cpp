#include<iostream>
using namespace std;
int main(){
    int i = 10;
    cout << i << endl;              // You Can Access i Because i define in Same Scope
    if(i == 10){
        int j = 20;
    }
    //cout << j << endl;              // You Can't Access j Because Scope of j is Only in if Condition
}