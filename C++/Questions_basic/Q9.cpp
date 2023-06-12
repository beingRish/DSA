#include<iostream>
using namespace std;

/* 
    Find the Maximum and Minimum number from an array.
*/

int getMax(int num[], int size){

    int maxNumber = INT_MIN;

    for(int i = 0; i < size; i++){

        if(num[i]>maxNumber){
            maxNumber = num[i];
        }
    }

    return maxNumber;

}

int getMin(int num[], int size){

    int minNumber = INT_MAX;

    for(int i = 0; i < size; i++){

        if(num[i]<minNumber){
            minNumber = num[i];
        }
    }

    return minNumber;
}

int main(){

    int sizeOfArray;
    cout << "What size you want to: ";
    cin >> sizeOfArray;
    
    int arr[100];

    // takinng input in array

    cout << "Enter the elements: " << endl;

    for(int i = 0; i < sizeOfArray; i++){
        cin >> arr[i];
    }

    cout << "Maximum number = " << getMax(arr, sizeOfArray) << endl;
    cout << "Minimum number = " << getMin(arr, sizeOfArray) << endl;

}