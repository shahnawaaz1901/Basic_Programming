/* 
    Array : Array is the Continuos Block of Homogenous(Same) Data Type
    Declaration of Array :
        data_type array_name[array_size]
    Index Based Accessability Works on Array
    0 is the Start Index of the Array

    Array is Used to Save Multiple Integers where we Can Store Every Integer In 
    Array Indexes. Using Normal Variable it's Very Painful to Create Every Variable
    and Store Ineteger Value in that Variable
*/
#include<iostream>
using namespace std;
int main(){
    int n;                  
    cin >> n;                   // How Much Data You Want to Give input
    /*
        Writing this statement a block of 100 integers is Created in Memory because Every 
        Integer Size is 4 bytes so Size of Block is 40 Bytes.
        Indexes of Array is Start From 0 and end at 99.
        Always Highest Index of Array is (ArraySize - 1)
    */
    int arr[100];               // Declaration of Array

    /*int arr[n]*/              // You Can't Do this Because Array is Declare Statically
    for(int i = 0; i < n;i++){
        cin >> arr[i];          // Take Input in Array
    }
    for(int i = 0; i < n;i++){
        cout << arr[i] << " ";
    }
}