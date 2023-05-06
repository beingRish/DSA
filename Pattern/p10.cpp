#include<iostream>
using namespace std;

int main(){
    /*
            A   B   C
            D   E   F
            G   H   I
    */

    int n;
    cout << "Enter a number: ";
    cin >> n;

    int i = 1;
    int value = 0;

    while(i<=n){
        int j = 1;

        while(j<=n){
            char ch = 'A' + value;
            cout << ch << " ";
            value = value + 1;
            j = j + 1;
        }
        cout << endl;
        i = i + 1;
    }
}