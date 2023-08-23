/*
Push Zeros to end

You have been given a random integer array/list(ARR) of size N. You have been required to 
push all the zeros that are present in the array/list to the end of it. Also, make sure to 
maintain the relative order of the non-zero elements.

For Input :
7
2 0 0 1 3 0 0
Output :
2 1 3 0 0 0 0
Explanation for the Sample Input :
All the zeros have been pushed towards the end of the array/list. Another important 
fact is that the order of the non-zero elements have been maintained as they appear in 
the input array/list.

For Input :
5
0 3 0 2 0
Output :
3 2 0 0 0

*/

#include<iostream>
using namespace std;

void pushZeroToEnd(int *input, int size){
    int x = 0;
    for (int i = 0; i < size; i++) {
        if (input[i] != 0) {
            int tmp = input[i];
            input[i] = input[x];
            input[x] = tmp;
            x++;
    }
  }
}

int main(){
    int n;
    cin >> n;
    int *arr = new int[n];
    for(int i = 0; i < n;i++){
        cin >> arr[i];
    }

    pushZeroToEnd(arr, n);
    for(int i = 0; i < n;i++){
        cout << arr[i] << " ";
    }
    

}