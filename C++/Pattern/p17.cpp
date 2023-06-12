#include<iostream>
using namespace std;

int main(){
/*
        *   *   *   *
            *   *   *
                *   *
                    * 
*/

    int n;
    cout << "Enter a number: ";
    cin >> n;

    int i = 1;

    while(i<=n){
        // Loop for space printing
        char space = i - 1;
        while(space){
            cout << " ";
            space = space - 1;
        }

        // Loop for * printing
        int j = 1;
        while(j<=n-i+1){
            cout << "*";
            j = j + 1;
        }

        i = i + 1;
        cout << endl;
    }
}