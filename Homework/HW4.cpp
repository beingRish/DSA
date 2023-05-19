#include<iostream>
#include<bitset>
using namespace std;


int main(){

    // Q. Convert to Binary of a Negative Number

    int a = -123;

    bitset<16> x(a);

    cout << " Binary of " << a << ": ";
    cout << x;

    cout << endl;

    

}