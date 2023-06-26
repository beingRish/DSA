#include<iostream>
using namespace std;

int findPowerByIteration(int a, int b){
    
    int ans=1;
    for(int i=1; i<=b; i++){
        ans = ans * a;
    }
    return ans;
}

int findPowerByRecursion(int a, int b){

    // base case
    if( b==0 )
        return 1;

    if( b==1 )
        return a;

    // RECURSIVE CALL
    int ans = findPowerByRecursion(a, b/2);

    // if b is even
    if(b%2 == 0){
        return ans * ans;
    }
    else{
        // if b is odd
        return a * ans * ans;
    }
}

int main(){
    
    int a, b;
    cout << "Enter the value of a and b: " << endl;
    cin >> a >> b;

    //int power = findPowerByIteration(a, b);
    int power = findPowerByRecursion(a, b);

    cout << a << " to the power of " << b << " is " << power << endl;
}