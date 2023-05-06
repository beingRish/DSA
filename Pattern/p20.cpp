#include<iostream>
using namespace std;

int main(){
    /*
            1   2   3   4
                2   3   4
                    3   4
                        4
    */

    int n;
    cout << "Enter a Number: ";
    cin >> n;

    int i = 1;
    while(i<=n){

        // Loop for space printing
        char space = i - 1;
        while(space){
            cout << " ";
            space = space - 1;
        }

        // Loop for digit printing
        int j = 1;
        while(j<=n-i+1){
            int value = j + i - 1;
            cout << value;
            value = value + 1;
            j = j + 1;
        }

        i = i + 1;
        cout << endl;
    }
}