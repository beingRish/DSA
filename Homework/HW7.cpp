#include<iostream>
using namespace std;

unsigned int total_SetBits(unsigned int a, unsigned int b){

    unsigned int countA = 0;
    unsigned int countB = 0;
    while (a)
    {
        countA += a & 1;
        a >>= 1;
    }

    while (b)
    {
        countB += b & 1;
        b >>= 1;
    }

    return countA + countB;
}

int main(){
    /*
        i/p -> a and b
        o/p -> total no of set bit in a & b

        a = 2 -> 1 0
        b = 3 -> 1 1

        total no of set bit = 3
    */

    int a;
    int b;
    cin >> a >> b;

    cout << "Total Number of set bit = " << total_SetBits(a, b);
}