#include<iostream>
using namespace std;

int main(){
    /*
            D
            C   D
            B   C   D
            A   B   C   D
    */
    
    int n;
    cout << "Enter a number: ";
    cin >> n;

    int i = 1;
    while(i<=n){
        int j = 1;
        char start = 'A' + n - i;
        while(j<=i){
            //char value = 'D' - i + j;
            cout << start << " ";
            start = start + 1;
            j = j + 1;
        }
        cout << endl;
        i = i + 1;
    }
}