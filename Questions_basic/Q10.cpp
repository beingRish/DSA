#include<iostream>
using namespace std;

/*
        Print Sum of all elements in an array
*/

int SumOfAllElemtns(int num[], int size){

    int sum = 0;

    for(int i = 0; i < size; i++){

        sum = sum + num[i];

    }

    return sum;
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

    cout << " Sum of Elements = " << SumOfAllElemtns(arr, sizeOfArray);
}