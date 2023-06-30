#include<iostream>
using namespace std;

int main(){
    
    int row;;
    cout << "Enter Number of Row: ";
    cin >> row;

    int col;
    cout << "Enter Number of Column: ";
    cin >> col;

    // Creating 2-D Array Dynamically

    int ** arr = new int*[row];

    for(int i=0; i<row; i++){
        arr[i] = new int[col];
    }

    // creation done

    // taking input
    cout << "Take inputs: " << endl;
    for(int i=0; i<row; i++){
        for(int j=0; j<col; j++){
            cin >> arr[i][j];
        }
    }

    // output
    for(int i=0; i<row; i++){
        for(int j=0; j<col; j++){
            cout << arr[i][j] << " ";
        }cout << endl;
    }

    // releasing memory
    for(int i=0; i<row; i++){
        delete [] arr[i];
    }

    delete []arr;



    return 0;

}