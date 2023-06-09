#include<iostream>
using namespace std;

void print(int *p){

    cout << *p << endl;
}

void update(int *p){

    // p = p + 1;
    // cout << " inside " << p  << endl;

    *p = *p + 1;
}

int getSum(int arr[], int n){

    cout << endl << "Size : " << sizeof(arr) << endl;  // 8

    int sum = 0;
    for(int i = 0; i<n; i++){
        sum += i[arr];
    }
    return sum;
}

int main(){
               // ****************** Integer Arrays ***********************

    //int arr[10] = {23,122,41,67};

    /*
    cout << " address of first memory block is " << arr << endl;
    cout << arr[0] << endl;   
    cout << " address of first memory block is " << &arr[0] << endl;

    cout << " 4th " << *arr << endl;    
    cout << " 5th " << *arr + 1 << endl;    
    cout << " 6th " << *(arr+1) << endl;    
    cout << " 7th " << *(arr)+1 << endl;    
    cout << " 8th " << arr[2] << endl;
    cout << " 9th " << *(arr+2) << endl;

    int i = 3;
    cout << i[arr] << endl; // 67
    

    int temp[10] = {1,2};
    cout << sizeof(temp) << endl;
    cout << " 1st " << sizeof(*temp) << endl;
    cout << " 2nd " << sizeof(&temp) << endl;

    int *ptr = &temp[0];
    cout << sizeof(ptr) << endl;
    cout << sizeof(*ptr) << endl;
    cout << sizeof(&ptr) << endl;


    int a[20] = {1,2,3,5};
    cout << " -> " << &a[0] << endl;
    cout << &a << endl;
    cout << a << endl;

    int *p = &a[0];
    cout << p << endl;
    cout << *p << endl;
    cout << " -> " << &p << endl;


    int arr[10];

    //Error
    //arr = arr + 1;

    int *ptr = &arr[0];
    cout << ptr << endl;
    ptr = ptr + 1;
    cout << ptr << endl;


                // **************** Character Arrays *********************

    int arr[5] = {1,2,3,4,5};
    char ch[6] = "abcde";

    cout << arr << endl;  // print address
    cout << ch << endl;   // print entire content

    char *c = &ch[0];
    cout << c << endl;    // print entire string

    char temp = 'z';
    char *p = &temp;

    cout << p << endl;
*/

    // *************************** Functions ***********************************

    int value = 5;
    int *p = &value;

    // print(p);   // print 5

    cout << " Before " << *p << endl;   
    update(p);
    cout << " After " << *p << endl;


    int arr[5] = {1,2,3,4,5};

    cout << "Sum is " << getSum(arr,5);


    return 0;
}