#include<iostream>
using namespace std;

void Fibonacci(int n){
    
    int t1 = 0, t2 = 1, nextTerm = 0, i;

    if(n == 0 || n == 1) 
    cout << n; 
    else
    nextTerm = t1 + t2;

    for (i = 3; i <= n; ++i)
    {
        t1 = t2;
        t2 = nextTerm;
        nextTerm = t1 + t2;
    }
    
    cout << t2;

}

int main(){
    /* find the nth term of fibonacci series

    Ex :- 0, 1, 1, 2, 3, 5, 8, 13, 21, 34, 55, .........

        n = 6
        o/p = 7

    */

    cout << endl;
    
    int n;
    cout << " Enter the value of n: ";
    cin >> n;

    cout << endl;

    Fibonacci(n);

}

