#include<iostream>
using namespace std;

int main(){
    /*
                A   B   C
                A   B   C
                A   B   C
    */
    
    int n;
    cout << "Enter a number: ";
    cin >> n;

    int i = 1;

    while(i<=n){
        int j = 1;
        while (j<=n){
            char ch = 'A' + j - 1;
            cout << ch << " ";
            j = j + 1;
        }
        i = i + 1;
        cout << endl;
    }
}