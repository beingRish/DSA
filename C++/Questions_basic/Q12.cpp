#include<iostream>
using namespace std;

// swap alternate elements


void swapAlternate(int arr[], int size){

    for(int i = 0; i < size; i += 2){
        if( i+1 < size ){
            // swap( arr[i], arr[i+1] );
            int temp = arr[1];
            arr[1] = arr[0];
            arr[0] = temp;
        }
    }

}

void printArray(int arr[], int size){

    for(int i = 0; i < size; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main(){

    int even[6] = {58, 42, 67, 31,  90, 26};
    int odd[5] = {413, 527, 234, 648, 352};

    swapAlternate(even, 6);
    printArray(even, 6);

    swapAlternate(odd, 5);
    printArray(odd, 5);

}