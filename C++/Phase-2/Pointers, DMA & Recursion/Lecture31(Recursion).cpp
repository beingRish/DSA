#include<iostream>
using namespace std;

/*
                        Recursion

    ->  If a function calls itself is called Recursion.
    ->  You gonna use the Recursion when solution of Big/Complex problem depends on small problem of same type.

*/

int factorial(int n) {

    // base case
    if(n == 0)
        return 1;

    // recursive relation
    return n * factorial(n-1);
}

int power(int n){

    // base case
    if(n == 0)
        return 1;

    // recursive relation
    return 2 * power(n-1);
}

void print(int n){

    // base case
    if(n==0){
        return ;
    }

    // recursive relation
    print (n-1);

    // processing
    cout << n << endl;
}

int main(){
            // Factorial
    int n1;
    cout << "Enter a number: ";
    cin >> n1;

    int ans1 = factorial(n1);

    cout << "Factorial = " << ans1 << endl;

            // Power
    int n2;
    cout << "Enter a number: ";
    cin >> n2;

    int ans2 = power(n2);

    cout << "Ans = " << ans2 << endl;

            // Counting
    int n3;
    cout << "Enter a number: ";
    cin >> n3;

    print(n3);

    return 0;
}