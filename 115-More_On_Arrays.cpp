#include<iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    int arr[100];
    for(int i = 0; i < n;i++){
        /*
        For Accessing Every Element or Something Change in Element Writing 
        Name of Array is Not Enough, You Need to Specify Index of Array
        */
        cin >> arr[i];
    }
    /*
    Array Index is Start From 0, Because index Represent How Far Element is
    Places From Start Element Because From Start first Element Distance is 0
    that's Why Indexing Start from 0. And Address of Whole Array and Starting
    Index or Array is Same
    */
    for(int i = 0; i < n;i++){
        cout << arr[i] << " ";
    }
}