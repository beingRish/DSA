#include<iostream>
using namespace std;

bool linearSearch(int *arr, int size, int key){  
    
    // base case
    if(size == 0)
        return false;

    if(arr[0]==key){
        return true;
    }
    else{
        bool remainingPart =linearSearch(arr+1, size-1, key);
        return remainingPart;
    }
}

int main(){

    int arr[] = {3, 5, 1, 2, 6};
    int size = 5;
    int key = 2;

    bool isFound = linearSearch(arr, size, key);

    if(isFound){
        cout << key << " is present in the array" << endl;
    }
    else{
        cout << key << " is not present in the array" << endl;
    }
}