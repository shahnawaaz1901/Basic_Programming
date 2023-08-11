#include<iostream>
using namespace std;
int main(){
    int i = 10;
    cout << i << endl;
    if(i == 10){
        int j = 20;             // You Can Only Access j in if Condition
        cout << i << endl;      // You Can Use i in if Condition
    }else{
        int j = 30;             // You Can Only Access j in else Condition
        cout << i << endl;      // You Can Use i in else Condition

    }
    // cout << j << endl;       // j is Only Accessable in if and else Codition
}
