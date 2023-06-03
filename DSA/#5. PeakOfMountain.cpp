#include<iostream>
using namespace std;

/*

    Find the Peak Index in a Mountain Array

*/

int peakIndex(int arr[], int size){

    int s = 0;
    int e = size - 1;

    int mid = s + (e-s) / 2;

    while (s<e){

        if(arr[mid] < arr[mid+1]){
            s = mid + 1;
        }
        else{
            e = mid;
        }
        
        mid = s + (e-s)/2;
    }
    return s;
}

int main(){

    int arr1[3] = {0,1,0};
    int arr2[8] = {0,2,5,6,4,1,0};
    int arr3[10] = {3, 7, 9, 24, 57, 68, 355, 122, 99, 24};

    cout << " Peak Index is " << peakIndex(arr1, 3) << endl;    // 1
    cout << " Peak Index is " << peakIndex(arr2, 8) << endl;    // 3
    cout << " Peak Index is " << peakIndex(arr3, 10) << endl;   // 6
}