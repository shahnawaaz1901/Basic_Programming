// You Are Given Two Number N and E.
// You Need to Print NUmbers from 1 to N except E

#include<iostream>
using namespace std;
int main(){
    int n, e;
    cin >> n >> e;
    for(int i = 1; i <= n;i++){
        if(i == e){
            continue;           // Continue Skip the Iteration and Send loop to Next Iteration
        }
        cout << i << " ";
    }
}
