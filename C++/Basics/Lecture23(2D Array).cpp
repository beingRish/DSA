#include<iostream>
using namespace std;

//**************************** 2D Array **************************

        // Function to Search the element

bool isPresent(int arr[][3], int target, int row, int col){

    for(int row=0; row<3; row++){
        for(int col=0; col<3; col++){

            if( arr[row][col] == target ){
                return 1;
            }
        }
    }
    return 0;
}

        // FUnction to Sum the element row wise

void printRowSum(int arr[][3], int row, int col){
    cout << "Printing SUm -> "  << endl;
    for(int row=0; row<3; row++){
        int sum = 0;
        for(int col=0; col<3; col++){
            sum += arr[row][col];
        }
        cout << sum << " ";
    }
    cout << endl;
}

        // FUnction to Sum the element Column wise

void printColSum(int arr[][3], int row, int col){
    cout << "Printing SUm -> "  << endl;
    for(int col=0; col<3; col++){
        int sum = 0;
        for(int row=0; row<3; row++){
            sum += arr[row][col];
        }
        cout << sum << " ";
    }
    cout << endl;
}

int main(){

            // Creating 2D Array

    int arr[3][3];
    //int arr[3][4] = {1,2,3,4,5,6,7,8,9,10,11,12};
    //int arr[3][4] = {{1,11,111,1111}, {2,22,222,2222}, {3,33,333,3333}};

            // taking input -> row wise input

    cout << "Enter the elements " << endl;
    for(int row=0; row<3; row++){
        for(int col=0; col<3; col++){
            cin >> arr[row][col];
        }
    }

            /* taking input -> col wise input

    for(int row=0; row<3; row++){
        for(int col=0; col<3; col++){
            cin >> arr[col][row];
        }
    }*/
    
            // print
    
    cout << " Printing the Array" << endl;
    for(int row=0; row<3; row++){
        for(int col=0; col<3; col++){
            cout << arr[row][col]<< " ";
        }
        cout << endl;
    }

        // Search the Element

    cout << "Enter the element to search : " << endl;
    int target;
    cin >> target;

    if(isPresent(arr, target, 3, 3)){
        cout << " Element Found " << endl;
    }
    else{
        cout << " Not Found " << endl;
    }

        // sum the element row wise

    printRowSum(arr, 3, 3);

        // sum the element row wise

    printColSum(arr, 3, 3);



    return 0;
}