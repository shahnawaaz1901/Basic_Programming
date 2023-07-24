//Print Numbers from 1 to n
#include<iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    int i = 1;                              //Variable which Iterate
    while(i <= n){                          //Condition Where We should Stop
        cout << i << " ";
        i++;                                //Update value of i so that we can go to next Number
    }
}