#include<iostream>
using namespace std;

#define PI 3.14     // creating macro

// #include :- preprocessor directive hai jo iostream wali file ko include krke aapke source code ke andar le aata hai.

// #define :- we can define/create macro

/* macro :- A piece of code in a program that is replaced by value of macro

       :- Advantage of macro :- -> easy to maintaine code
                                -> No one can update it
                                -> We didn't take any extra memory
*/
/* Global Variable :- Global Variable can be accessed anywhere in the whole program

     Demerit of Global variables :- -> any function can change/update it
     Do use reference variable instead of Global variables.
*/

int score = 15;     // Global Variable (bad practice)

void a(int& i){

    cout << score << " in a" << endl;

    cout << i << endl;
}

void b(int& i) {

    cout << score << " in b" << endl;

    cout << i << endl;
}

inline int getMax(int& a, int& b){

    return (a>b) ? a : b;
}

void print(int arr[], int n, int start = 0){

    for(int i = start; i<n; i++){
        cout << arr[i] << endl;
    }
}

int main(){
/*                    // Demonstration of macro :)
    int r = 5;
    double area = PI * r * r;   // using macro as PI :)
    cout << "Area is " << area << endl;
*/
/*
    cout << score << " in main" << endl;

    int i = 5;
    a(i);
    b(i);
*/
    
                // Inline Functions
    
/*
    -> are used to reduce the function calls over head

    Advantage of Inline Function :- 
        -> No extra memory usage
        -> No function calls over head
*/
/*
    int a = 1, b = 2;
    int ans = 0;

    ans = getMax(a,b);
    cout << ans << endl;

    a = a + 3;
    b = b + 1;

    ans = getMax(a,b);
    cout << ans << endl;
*/
/*
                Default Arguments
*/

    int arr[5] = {1, 4, 7, 8, 9};
    int size = 5;
    print(arr,size);
    cout << endl;
    print(arr, size, 2);

    return 0;

}