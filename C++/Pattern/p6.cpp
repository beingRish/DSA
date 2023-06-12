#include<iostream>
using namespace std;

int main(){
    /*
                1
                2   3
                3   4   5
                4   5   6   7
    */

   /*
    int n;
    cout << "Enter a Number: ";
    cin >> n;

    int i = 1;

    while (i <= n)
    {
        int j = 1;
        int value = i;
        while (j <= i)
        {
            cout << value << " ";
            value = value + 1;
            j = j + 1;
        }
        cout << endl;
        i = i + 1;
    }
    */
    // ------------------ Method 2  -----------------
    int n;
    cout << "Enter a Number: ";
    cin >> n;

    for(int i = 1; i <= n; i++){
        for(int j = 0; j < i; j++){
            cout << j+i << " ";
        }
        cout << endl;
    }
    
}