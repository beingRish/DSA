#include<iostream>
using namespace std;

int main(){

    /*
                        1
                    2   3
                4   5   6
            7   8   9   10
    */

    int n;
    cout << "Enter a Number: ";
    cin >> n;

    int i = 1;
    int count = 1;

    while(i<=n){

        // Loop for space print
        char space = n - i;
        while(space){
            cout << " ";
            space = space - 1;
        }

        // Loop for * print
        int j = 1;
        while(j<=i){
            cout << count;
            count = count + 1;
            j = j + 1;
        }

        i = i + 1;
        
        cout << endl;
    }

    
}