#include<iostream>
using namespace std;

void insertionSort(int arr[], int n)
{   
    for(int i=1; i <= n-1; i++){

        int temp = arr[i];
        int j = i-1;

        for(; j>=0; j--){
            
            if(arr[j] > temp){
                // shift
                arr[j+1] = arr[j];
            }
            else{
                // stop
                break;
            }  
        }
        arr[j+1] = temp;
    }
}

void sortedArray(int arr[], int n){

    for(int i=0; i < n; i++){
        cout << arr[i] << " ";
    }
}

int main(){
    
    int arr[5] = {54, 24, 23, 11, 35};

    insertionSort(arr, 5);
    sortedArray(arr, 5);

}