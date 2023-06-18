#include<iostream>
using namespace std;

int main(){
    /*
            1   2   3   4
            1   2   3   4
            1   2   3   4
            1   2   3   4
    */

                // while loop

    int i = 1;
    while(i <= 4){
        int j = 1;
        while(j <= 4){
            cout << j << " ";
            j = j + 1;
        }
        cout << endl;
        i = i + 1;
    }
    
                // for loop
    /*
    for(int i = 1; i <= 4; i++){
        for(int j = 1; j <= 4; j++){
            cout << j << " ";
        }
        cout << endl;
    }
    */
}