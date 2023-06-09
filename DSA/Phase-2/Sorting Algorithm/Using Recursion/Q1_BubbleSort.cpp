#include<iostream>
using namespace std;

void bubbleSort(int *arr, int n){

    // base case -> Already Sorted
    if(n==0 || n==1){
        return ;
    }

    // 1 case solved - put the largest element at last index
    for(int i=0; i<n-1; i++){
        if(arr[i] > arr[i+1]){
            swap(arr[i], arr[i+1]);
        }
    }

    bubbleSort(arr, n-1);
}

int main(){

    int arr[5] = {2, 5, 1, 6, 9};

    bubbleSort(arr, 5);

    for(int i=0; i<5; i++){
        cout << arr[i] << " ";
    }
}