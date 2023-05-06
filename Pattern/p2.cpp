#include<iostream>
using namespace std;

int main(){
    /*
                1   2   3
                4   5   6
                7   8   9
    */

                // while loop

    /*
    int n;
    cout << "Enter a number : ";
    cin >> n;

    int count = 1;

    int i = 1;
    while(i <= n){
        int j = 1;
        while(j <= n){
            cout << count << " ";
            count = count + 1;
            j = j + 1;
        }
        cout << endl;
        i = i + 1;
    }
    */

                    // for loop
    
    int n;
    cout << "Enter a number : ";
    cin >> n;

    int count = 1;

    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= n; j++){
            cout << count << " ";
            count = count + 1;
        }
        cout << endl;
    }

}