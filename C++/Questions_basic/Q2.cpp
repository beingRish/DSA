#include<iostream>
using namespace std;

// Q1. 1 to N -------> n <- i/p Find sum of all even number

int main(){
    int n;
    cout << "Enter a Number : " ;
    cin >> n;

    int i = 1;
    int s = 0;

    while(i<=n){
        s = s + i;
        i = i + 1;
    }
    
    cout << "Sum = " << s;
}