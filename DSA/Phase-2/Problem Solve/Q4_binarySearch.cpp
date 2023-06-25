#include<iostream>
using namespace std;

int binarySearch(int *arr, int s, int e, int k){

    // base case

    // element not found
    if(s>e)
        return -1;

    
    int mid = s + (e-s)/2;

    // element found
    if(arr[mid] == k)
        return true;

    if(arr[mid] < k){
        return binarySearch(arr, mid+1, e, k);
    }
    else{
        return binarySearch(arr, s, mid-1, k);
    }

    
}

int main(){

    int arr[] = {34, 67, 78, 89, 93};
    int key = 89;

    int isFound = binarySearch(arr, 0, 4, key);
    cout << key << " present or not  " << isFound << endl;
}