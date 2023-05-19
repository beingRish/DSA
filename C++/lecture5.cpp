#include<iostream>
using namespace std;

int main(){
    // ---------------------------------------------------- Bitwise Operators ------------------------------------------------------

    /*
            AND             ->      &
            OR              ->      |
            NOT             ->      ~
            XOR             ->      ^
    */

   /*
    int a = 4;
    int b = 6;

    cout << " a&b " << (a&b) << endl;   // 4
    cout << " a|b " << (a|b) << endl;   // 6
    cout << " ~a " << ~a << endl;       // -5
    cout << " a^b " << (a^b) << endl;   // 2
    */

    /*
            Left-shift      ->      <<
            Right-shift     ->      >>
    */

   /*
    cout << (17>>1) << endl;    // 8
    cout << (17>>2) << endl;    // 4
    cout << (19<<1) << endl;    // 38
    cout << (21<<2) << endl;    // 84
    */

        // pre-increment, post-increment, pre-decrement, post-decrement
    /*
    int i = 7;
    cout << (++i) << endl;  
    // 8
    cout << (i++) << endl;  
    // 8, i = 9
    cout << (i--) << endl;  
    // 9, i = 8
    cout << (--i) << endl; 
    // 7, i = 7
    */

    //----------------------------------------------------- Home Work-------------------------------------------------------------
    
            // Ques 1
    /*
    int a, b = 1;
    a = 10;
    if(++a){
        cout << b;
    }else{
        cout << ++b;
    }                               // output :- 1   */

            // Ques 2 
    /* 
    int a = 1;
    int b = 2;

    if(a-- > 0 && ++b > 2){
        cout << "Stage1 - Inside if ";
    }else{
        cout << "Stage2 - Inside else ";
    }
    cout << a << " " << b << endl;   // output :- Inside If 0, 3   */

            // Ques 3 
    /*
    int a = 1;
    int b = 2;

    if(a-- > 0 || ++b > 2){
        cout << "Stage1 - Inside if ";
    }else{
        cout << "Stage2 - Inside else ";
    }
    cout << a << " " << b << endl;      // output :- Inside If 0, 2  */

            // Ques 4
    /*
    int number = 3;
    cout << (25 * (++ number)) << endl;         // output :- 100   */

            // Ques 5
    /*
    int a = 1;
    int b = a++;
    int c = ++a;
    cout << b << endl;          // output :- 1
    cout << c << endl;          // output :- 3  */

    // ----------------------------------------------------- For Loops -------------------------------------------------------

    /*
    int n ;
    cout << " Enter the value of n: ";
    cin >> n;

    cout << "Printing count from 1 to n" << endl;
    */

    /*          For loop Method-1
    int i = 1;
    for(; ; ){
        if(i <= n){
            cout << i << endl;
        }else{
            break;      // break keyword gets you out of current loop
        }
        i++;
    }
    */
            // we can do multiple initialization, multiple condition and multiple updation
    /*
    for(int a = 0, b = 1, c = 2; a >= 0 && b >= 1 && c >= 2; a--, b--, c--){
        cout << a << " " << b << " " << c << endl;
    }
    */

    // **********  Fibonacci Series :- 0, 1, 1, 2, 3, 5, 8, 13, 21, .............

    /*
    int n;
    cout << "Enter a Number: ";
    cin >> n;

    int a = 0;
    int b = 1;

    cout << a << " " << b << " ";

    for(int i = 1; i <= n; i++){

        int nextNumber = a + b;
        cout << nextNumber << " ";
        
        a = b;
        b = nextNumber;
    }
    */

    // *************** Prime Number :- n = 7

    /*
    int n;
    cout << "Enter a Number: ";
    cin >> n;

    int Prime = true;

    for (int i = 2; i < n; i++){
        if(n%i == 0){
            Prime = false;
            break;
        }
        
    }

    if(Prime){
        cout << " Prime ";
    }
    else{
        cout << " Not Prime ";
    }
    */

    //        Continue  // skips the iteration
    
    /*
    for(int i = 0; i < 5; i++){
        cout << " Hi " << endl;
        cout << " Hey " << endl;
        continue;

        cout << " Reply toh karde " << endl;
    }
    */

    // --------------------------------------- Questions Practice ------------------------------------------

    /* ******Question-1****** n = 234  output = Product of digits - sum of digits*/

    /*
    int number = 234;
    int product = 1;
    int sum = 0;
    
    while(number!=0){
        
        int remainder = number % 10;
        product = product * remainder;
        sum = sum + remainder;
        number = number / 10;
    }

    int result = product - sum;
    cout << "Result = " << result;
    */

    /* ******Question-2****** n = 234  output = Product of digits - sum of digits*/

    int number = 2343;
    int sum = 0;
    int product = 1;

    while(number!=0){
        int remainder = number % 10;
        product = product * remainder;
        sum = sum + remainder;
        number = number / 10;
    }

    int result = product - sum;
    cout << "Result = " << result;
}