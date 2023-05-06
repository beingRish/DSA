#include<iostream>
using namespace std;

int main(){
    /*
            _   _   _   _   *
            _   _   _   *   *
            _   _   *   *   *
            _   *   *   *   *
    */
    
    int n;
    cout << "Enter a Number: ";
    cin >> n;

    int i = 1;

    // Loop for space printing
    while(i<=n){
        char space = n - i;
        while(space){
            cout << " ";
            space = space - 1;
        }

        // Loop for * printing
        int j = 1;
        while(j<=i){
            cout << "*";
            j = j + 1;
        }

        cout << endl;
        i = i + 1;
        
    }
}