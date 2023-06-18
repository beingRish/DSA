#include<iostream>
using namespace std;

int main(){
    /*
                        1
                    2   2
                3   3   3
            4   4   4   4
    */

    int n;
    cout << "Enter a Number: ";
    cin >> n;

    int i = 1;
    while(i<=n){

        // Loop for space print
        char space = n - i;
        while(space){
            cout << " ";
            space = space - 1;
        }

        // Loop for digit printing print
        int j = 1;
        while(j<=i){
            cout << i;
            j = j + 1;
        }

        i = i + 1;
        cout << endl;
    }
}