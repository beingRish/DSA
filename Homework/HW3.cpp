#include<iostream>
using namespace std;

// Q3. Check a number prime or not

int main(){
    
    int n;
    cout << "Enter a number : ";
    cin >> n;

    int i = 2;
    bool prime = false;

    while(i<n){

        //divide ho gya, not prime
        if(n%i==0){
            prime = false;
            break;
        }else{
            prime = true;
            break;
        }
        i = i + 1;
    }

    if(prime == true){
        cout << "Prime Number" << endl;
    }else{
        cout << "Not a Prime Number" << endl;
    }
}