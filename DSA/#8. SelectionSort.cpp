#include<iostream>
using namespace std;

void selectionSort(int arr[], int n)
{   
    for(int i=0; i < n-1; i++){
        int minIndex = i;

        for(int j = i+1; j<n; j++){
            
            if(arr[j] < arr[minIndex])
                minIndex = j;
        }

        swap(arr[minIndex], arr[i]);
    }
}

void sortedArray(int arr[], int n){

    for(int i=0; i < n; i++){
        cout << arr[i] << " ";
    }
}

int main(){
    
    int arr[5] = {54, 24, 23, 11, 35};

    selectionSort(arr, 5);
    sortedArray(arr, 5);

}