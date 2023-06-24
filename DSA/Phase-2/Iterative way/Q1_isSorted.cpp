#include<iostream>
using namespace std;

/*  
            Check the Array is sorted or not
*/

bool isSorted(int arr[], int size) {

    int i = 0;
    int s = arr[i];
    int e = arr[i+1];

    while(s < size-1){

        if(arr[i] > arr[i+1]) {

            return false;
        }

        i++;
    }

    return true;
}

int main(){

    int arr[] = {34, 56, 355, 78, 642};

    int size = 5;

    cout << "The Array is Sorted or not :- " << isSorted(arr, 5) << endl;


    return 0;

}