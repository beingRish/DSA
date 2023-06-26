#include<iostream>
using namespace std;

void bubbleSort(int arr[], int n)
{   
    for(int i = 1; i < n; i++){
        // for round 1 to n-1

        bool swapped = false;

        for(int j = 0; j < n-i; j++){

            // process element till n-i th index
            
            if(arr[j] > arr[j+1]){
                swap(arr[j], arr[j+1]);
                swapped = true;
            }
        }
        if(swapped == false){
            break;
        }
    }
}

void print(int arr[], int n){

    for(int i=0; i < n; i++){
        cout << arr[i] << " ";
    }
}

int main(){
    
    int arr[5] = {324, 322, 948, 346, 150};

    bubbleSort(arr, 5);
    print(arr, 5);

}