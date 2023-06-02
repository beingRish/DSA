#include<iostream>
using namespace std;

/*
    Find the First and Last Position of an Element In Sorted Array and also find Total Number of Occurrence.
*/

int firstOccurrence(int arr[], int n, int key) {

    int s = 0, e = n-1;
    int mid = s + (e-s)/2;
    int ans = -1;

    while(s<=e){

        if(arr[mid] == key){

            ans = mid;
            e = mid - 1; 
        }
        else if(key > arr[mid]){

            // Right me jao
            s = mid + 1;
        }
        else if(key < arr[mid]){

            // left me jao
            e = mid - 1;
        }
        mid = s + (e-s)/2;
    }
    return ans; 
}

int lastOccurrence(int arr[], int n, int key) {

    int s = 0, e = n-1;
    int mid = s + (e-s)/2;
    int ans = -1;

    while(s<=e){

        if(arr[mid] == key){

            ans = mid;
            s = mid + 1; 
        }
        else if(key > arr[mid]){

            // Right me jao
            s = mid + 1;
        }
        else if(key < arr[mid]){

            // left me jao
            e = mid - 1;
        }
        mid = s + (e-s)/2;
    }
    return ans; 
}


int main(){

    int even[10] = {1,2,3,3,3,3,3,3,3,5};

    cout << " First Occurrence of 3 is at Index " << firstOccurrence(even, 10, 3) << endl;
    cout << " Last Occurrence of 3 is at Index " << lastOccurrence(even, 10, 3) << endl;

    // Total Number of Occurrence = (last Index - First Index) + 1

    int firstIndex = firstOccurrence(even, 10, 3);
    int lastIndex = lastOccurrence(even, 10, 3);

    cout << "Total Number of Occurrence = " << (lastIndex - firstIndex) + 1 << endl;

    return 0;
}