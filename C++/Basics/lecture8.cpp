#include<iostream>
using namespace std;

int power(int a, int b){

    int ans = 1;

    for(int i = 1; i <= b; i++){
        ans = ans * a;
    }

    return ans;
}

bool evenOrNot(int a){
    if(a&1){
        return false;
    }else{
        return true;
    }
}

// Function Signature
int factorial(int n){
    // Function body
    int fact = 1;

    for(int i = 1; i <= n; i++){
        fact = fact * i;
    }

    return fact;
}

int nCr(int n, int r){

    int num = factorial(n);

    int denom = factorial(r) * factorial(n-r);

    return num/denom;
}

void printCounting(int n){
    for(int i = 1; i <=n ; i++){
        cout << i << endl;
    }
}

bool isPrime(int n){

    for(int i = 2; i < n; i++){
        
        if(n%i == 0){
            return 0;
        }
    }

    return 1;
}

int main(){

    // ------------------------------------- Switch Statement -------------------------------------------

    /* 
    int a, b;

    cout << endl;

    cout << " Enter the value of a: ";
    cin >> a;

    cout << endl;

    cout << " Enter the value of b: ";
    cin >> b;

    cout << endl;
    
    char op;
    cout << " Enter the Operation you want to perform: ";
    cin >> op;

    cout << endl;
    switch ( op ){

        case '+': cout << a + b << endl;
                break;

        case '-': cout << a - b << endl;
                break;

        case '*': cout << a * b << endl;
                break;
            
        case '/': cout << a / b << endl;
                break;

        default: cout << " Not a valid operation " << endl;
    }

    cout << endl;
    */


    // -------------------------------------- Function ------------------------------------------

    /*            Power     
    cout << endl;

    int a, b;
    cout << " Enter the value of a: ";
    cin >> a;

    cout << endl;

    cout << " Enter the value of b: ";
    cin >> b;

    cout << endl;
    cout << " Answer is = " << power(a,b) << endl;
    cout << endl;
    */

   /*            Even Or Not            

    int n;
    cout << " Enter a Number: ";
    cin >> n;

    if(evenOrNot(n)){
        cout << n << " is Even " << endl;
    }
    else{
        cout << n << " is Odd " << endl;
    }
    */

    /*           nCr = n!/(r! * (n-r)!)

    int n, r;
    cin >> n >> r;

    cout << " Answer is " << nCr(n,r) << endl;
    */

    /*      counting

    int n;
    cin >> n;

    // function call
    printCounting(n);
    */

    /*      check Prime        */

    int n;
    cin >> n;

    if(isPrime(n)){
        cout << " is a prime no." << endl;
    }
    else{
        cout << " is not a prime no." << endl;
    }

}