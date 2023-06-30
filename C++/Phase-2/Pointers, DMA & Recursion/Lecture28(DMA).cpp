#include<iostream>
using namespace std;

                // ***************** Dynamic Memory Allocation ************************

// pass by value :- allocate new memory
void update(int n) {
    n++;
}

// pass by reference :- doesn't allocate new memory
void update2(int& n) {
    n++;
}

int getSum(int *arr, int n){

    int sum = 0;
    for(int i=0; i<n; i++){
        sum += arr[i];
    }
    return sum;
}

int main(){
    // Reference variable :- Same memory but different names
/*
    int i = 5;

    // creating a reference variable
    int& j = i;

    cout << i << endl;
    i++;
    cout << i << endl;
    j++;
    cout << i << endl;
    cout << j << endl;
*/

/*
    int n = 5;

    cout << endl;

    cout << "calling pass by value wala function" << endl;
    cout << "Before " << n << endl;     // 5
    update(n);
    cout << "After " << n << endl;      // 6

    cout << endl;

    cout << "calling pass by reference wala function" << endl;
    cout << "Before " << n << endl;     // 5
    update2(n);
    cout << "After " << n << endl;      // 6

    cout << endl;
*/

    // Creating array into heap (Dynamically)

    // int* arr = new int [5];     // total memory allocation = 8(pointer in stack) + 5*4(int in heap) = 28 
    
    int n;
    cout << "Enter size: ";
    cin >> n;

    // variable size array
    int* arr = new int[n];

    // taking input in array
    cout << "Enter elements of array:" << endl;
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }

    int ans = getSum(arr, n);

    cout << " Answer is " << ans << endl;




    return 0;
}