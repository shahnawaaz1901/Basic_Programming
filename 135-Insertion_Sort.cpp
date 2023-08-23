#include<iostream>
using namespace std;

void insertionSort(int *arr, int n){
    if(n == 0 || n == 1){
        return;
    }

    for(int i = 0; i < n;i++){
        int currenElement = arr[i];
        for(int j = i - 1; j >= 0;j--){
            if(currenElement < arr[j]){
                arr[j + 1] = arr[j];
                arr[j] = currenElement;
            }else{
                break;
            }
        }
        arr[j + 1] = currenElement;
    }
}

int main(){
    int n;
    cin >> n;
    int *arr = new int[n];
    for(int i = 0; i < n;i++){
        cin >> arr[i];
    }

    insertionSort(arr, n);
    for(int i = 0; i < n;i++){
        cout << arr[i] << " ";
    }

}