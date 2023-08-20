#include<iostream>
using namespace std;

// In Array Case We Have No Choice to find Size of Array So We Passed Size Explicitly in Array
void printArray(int arr[], int n){
    /* 
    This Statement Prints 8 Because in Array Case Whole Array Not Passed 
    Address of 0th Index of Array is Passed
    */
    cout << "In Print Function : " << sizeof(arr) << endl;      //Print 8 Because size of Hexadecimal Address is 8 Bytes in C++
    for(int i = 0; i < n;i++){
        cout << arr[i] << " ";
    }
}

int main(){
    int n;
    cin >> n;
    int arr[100];
    printArray(arr, n);
    /* Print 400 Because Size is 100 and Each integer have 4 bytes */
    cout << "In Main Function : " << sizeof(arr) << endl;
}