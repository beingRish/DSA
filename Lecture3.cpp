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

    //   ------------------------------------------- Home Work ----------------------------------------

    /*
    char ch;
    cout<<"Enter a Alphabate, Digit or Special Character: "<<endl;
    cin>>ch;

    if(ch>='a' && ch<='z'){
        cout<<"This is Lower case"<<endl;
    }else if(ch>='A' && ch<='Z'){
        cout<<"This is a Upper Case"<<endl;
    }else if(ch>=0 && ch<=9){
        cout<<"This is a Digit"<<endl;
    }else{
        cout<<"This is a special character."<<endl;
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

    // ----------------------------------------------- Home Work ------------------------------------------

    // Q1. 1 to N -------> n <- i/p Find sum of all even number

    /*
    int n;
    cout << "Enter a Number : " ;
    cin >> n;

    int i = 1;

    while(i<=n){
        cout << i << " ";
        i = i + 1;
    }
    */

    // Q2. Fahrenheight to Celcious Table

    float fh, cl;
    int begin = 0, stop = 300;

    cout << "Fahrenheit\tCelsius" << endl;
    cout << "----------\t---------- " << endl;



    
    


    // Q3. Check a number prime or not

    /*
    int n;
    cout << "Enter a number : ";
    cin >> n;

    int i = 2;
    bool prime = false;

    while(i<n){

        //divide ho gya, not prime
        if(n%i==0){
            prime = false;
            break;
        }else{
            prime = true;
            break;
        }
        i = i + 1;
    }

    if(prime == true){
        cout << "Prime Number" << endl;
    }else{
        cout << "Not a Prime Number" << endl;
    }
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