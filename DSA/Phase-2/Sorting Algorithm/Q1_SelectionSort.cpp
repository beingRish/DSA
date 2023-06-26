#include<iostream>
using namespace std;

void selectionSort(int *arr, int size){

    for(int i=0; i<size-1; i++){
        int minIndex = i;

        for(int j=i+1; j<size; j++){

            if(arr[j] < arr[minIndex])
                minIndex = j;
        }

        swap(arr[minIndex], arr[i]);
    }
}

void print(int *arr, int size){
    for(int i=0; i<size; i++){
        cout << arr[i] << " ";
    }
}

int main(){

    int arr[] = {32, 55, 31, 746, 42, 24};
    int size = 6;

    selectionSort(arr, size);
    print(arr, size);
}