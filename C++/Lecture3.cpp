#include <iostream>
using namespace std;
int main()
{

    // -------------------------------------------------- Conditionals ---------------------------------------------

    /*
    int a;
    cout<<"Enter a number:"<<endl;
    cin>>a;
    if(a > 0){
        cout<<"Positive hai"<<endl;
    }
    else{
        cout<<"Negative hai";
    }*/

    /*
    int a;
    cout<<"enter a number: ";
    cin>>a;
    if(a>0){
        cout<<" A is Positive"<< endl;
    }
    else{
        if(a < 0){
            cout<<" A is Negative"<<endl;
        }
        else{
            cout<< "A is 0"<<endl;
        }
    }
    */

    /*
    int a = 0;
    if(a>0){
     cout<<" A is Positive"<<endl;
    }
    else if(a<0){
     cout<<" A is Negative"<<endl;
    }
    else{
     cout<<"A is zero";
    }*/

    // ----------------------------------------------- Loops -----------------------------------------------
    // While Loop :-
    /*
    int n;
    cout<<"Enter a number: "<<endl;
    cin>>n;

    int i = 1;

    while(i<=n){
        cout<<i<<" ";
        i = i+1;
    }
    */

    /*
     int n;
     cout << "Enter a number: " << endl;
     cin>>n;

     int i = 1;
     int sum = 0;

     while(i<=n){
         sum = sum + i;
         i = i + 1;
     }
     cout << "Sum = " << sum << endl;
     */

    // ------------------------------------------------- Pattern ----------------------------------------------------

    /* Pattern - 1      *   *   *   *   *
                        *   *   *   *   *
                        *   *   *   *   *
                        *   *   *   *   *
                        *   *   *   *   *

    */

    /*
    int n;
    cout << "Enter a number: ";
    cin >> n;

    int i = 1;

    while(i<=n){

        int j = 1;
        while(j<=n){
            cout << "*";
            j = j + 1;
        }
        cout << endl;
        i = i + 1;
    }
    */

    /*  Pattern - 2     1   1   1
                        2   2   2
                        3   3   3
    */

    /*
    int n;
    cout << "Enter a Number : " ;
    cin >> n;

    int i = 1;

    while(i<=n){

            int j = 1;
            while(j<=n){
            cout << i << " ";
            j = j + 1;
        }
        cout << endl;
        i = i + 1;
    }
    */
}