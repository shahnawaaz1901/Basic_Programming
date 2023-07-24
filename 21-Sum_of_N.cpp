// Print Sum of Numbers from 1 to n
#include<iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    int sum = 0;                //Variable where we Store the Total Value
    int i = 1;                  //Variable which Iterate
    while(i <= n){              //Condition
        sum = sum + i;          //add Value to sum
        i++;                    //Increment Value of i
    }
}