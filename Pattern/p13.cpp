#include<iostream>
using namespace std;

int main(){
    /*
            A
            B   C
            C   D   E
            D   E   F   G
    */

    int n;
    cout << "Enter a number: ";
    cin >> n;

    int i = 1;
    while(i<=n){
        int j = 1;
        while(j<=i){
            char value = 'A' + i + j - 2;
            cout << value << " ";
            j = j + 1;
        }
        cout << endl;
        i = i + 1;
    }

}