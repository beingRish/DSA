#include<iostream>
using namespace std;

int main(){
    /*
                            1
                        1   2   1
                    1   2   3   2   1
                1   2   3   4   3   2   1   
    */

    int i = 1;

    while(i<=4){

        // print space (1st triangle)
        char space = 4 - i;
        while(space){
            cout << " ";
            space = space - 1;
        }

        // print 2nd triangle
        int j = 1;
        while(j<=i){
            cout << j;
            j = j + 1;
        }

        // print 3rd triangle
        int start = i - 1;
        while(start){
            cout << start ;
            start = start - 1;
        }

        cout << endl;
        i = i + 1;
    }
}