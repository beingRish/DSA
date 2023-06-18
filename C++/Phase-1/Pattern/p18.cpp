#include<iostream>
using namespace std;

int main(){
    /*
            1   1   1   1   
                2   2   2   
                    3   3
                        4 

    */

    int n;
    cout << "Enter a number: ";
    cin >> n;

    int i = 1;
    while(i<=n){

        // while loop for space print
        char space = i - 1 ;
        while(space){
            cout << " ";
            space = space - 1;
        }

        // while loop for digit print
        int j = 1;
        while(j<=n - i + 1){
            cout << i;
            j = j + 1;
        }
        i = i + 1;
        cout << endl;
    }
}