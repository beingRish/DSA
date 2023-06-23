#include<iostream>
using namespace std;

void reachHome (int src, int dest) {

    cout << "source " << src << " destination " << dest << endl;

    // base case
    if(src == dest) {
        cout << " pahuch gya " << endl;
        return ;
    }

    // processing - ek step aage badhjao
    src++;

    // recurance relation
    reachHome(src, dest);
}

int fib(int n){

    // base case
    if(n==0)
        return 0;
    
    if(n==1)
        return 1;

    // recurance relation
    int ans = fib(n-1) + fib(n-2);

    return ans;
}

void sayDigit(int n, string arr[]) {

    // base case
    if(n == 0)
        return ;

    // processing
    int digit = n % 10;
    n = n / 10;

    // recursive call
    sayDigit(n, arr);

    cout << arr[digit] << " ";

}

int main(){
/*  // **************************** Easiest Way to understand Recurstion *********************

    int dest = 10;
    int src = 1;

    reachHome(src, dest);
*/

    // **************************** Fibonnacci No *******************************************
/*
    int n;
    cout << "Enter a number: ";
    cin >> n;

    cout << n << "th term of fibonacci series is " << fib(n);
*/

    string arr[10] = {"zero", "one", "two", "three", "four", "five",
                        "six", "seven", "eight", "nine"};

    int n;
    cout << "Enter a number: ";
    cin >> n;

    cout << endl << endl << endl;
    sayDigit(n, arr);
    cout << endl << endl << endl;




    return 0;
}