#include<iostream>
using namespace std;

int sumOfElements(int *arr, int size){

    // base case
    if(size <= 0){
        return 0;
    }

    return (sumOfElements(arr, size-1) + arr[size-1]);

}

int main(){

    int arr[] = {3, 2, 5, 1, 6};

    cout << "Sum of elements = " << sumOfElements(arr, 5);
}