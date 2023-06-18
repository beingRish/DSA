#include<iostream>
using namespace std;

// ---------------------------------- Array :- Similar type of items --------------------------------

// Arrays with Functions

void printArray(int arr[], int size){

    cout << " printing the array " << endl;

    for(int i = 0; i < size; i++){
        cout << arr[i] << " ";
    }
    
    cout << endl << " printing Done " << endl;
}


int main(){
    
    // declare an array
    int number[15];

    // accessing an array
    cout << endl << " Value at 0 index " << number[0] << endl;

    // initialising an array
    int second[3] = {5, 7, 11};

    // accessing an array
    cout << " Value at 2 index " << second[2] << endl << endl;

    int third[15] = {2, 7};

    printArray(third, 15);

    cout << endl;

    // initialising all locations with 0
    int fourth[10] = {0};

    printArray(fourth, 10);

    cout << endl;


    // initialising all locations with 1 [not possible with below line]
    int fifth[10] = {1};
    
    printArray(fifth, 10);

    cout << endl;

    // finding size of an array

    int fifthSize = sizeof(fifth)/sizeof(int);
    cout << " Size of Fifth is " << fifthSize << endl;

    

    cout << endl << " Everything is Fine " << endl << endl;
}