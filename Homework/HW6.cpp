#include<iostream>
using namespace std;

/*  
        A.P = (3*n+7)
        i/p -> n
        o/p -> nth term
*/

int Arithmetic_Progression(int n){
    int AP = 3 * n + 7;
    return AP;
}

int main(){
    int n;
    cout << " Enter the value of n: ";
    cin >> n;

    cout << n << "th term is " << Arithmetic_Progression(n);
}