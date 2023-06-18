#include<iostream>
using namespace std;

int main(){
    /*  
            1   2   3   4   5   5   4   3   2   1                       
            1   2   3   4   *   *   4   3   2   1
            1   2   3   *   *   *   *   3   2   1
            1   2   *   *   *   *   *   *   2   1
            1   *   *   *   *   *   *   *   *   1
    */
    
    int n;
    cout << "Enter a number: ";
    cin >> n;

    int i = 1;
    
    while(i<=n){

        // Printing 1st triangle
        int j = 1;
        while(j<=n+1-i){
            cout << j;
            j = j + 1;
        }

        // Printing 2nd triangle
        int k = 1;
        while(k<=i-1){
            cout << "*";
            k = k + 1;
        }

        // Printing 3rd triangle
        char l = i - 1;
        while(l){
            cout << "*";
            l = l - 1;
        }

        // printing 4th triangle
        int start = n-i+1;
        while(start){
            cout << start;
            start = start - 1;
        }

        cout << endl;
        i = i + 1;
    }
}