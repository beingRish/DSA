#include<iostream>
using namespace std;

int main(){
/*
    int num = 5;

    cout << num << endl;

    // address of Operator - & in Hexadecimal format

    cout << " address of num is " << &num << endl; 

    // creating Pointer to int
    int *ptr = &num;
    
    cout << "Adress is : " << ptr << endl;    
    cout << "value is : " << *ptr << endl;      // 5

    // creating Pointer to double
    double d = 4.3;
    double *p2 = &d;

    cout << "Adress is : " << p2 << endl;
    cout << "value is : " << *p2 << endl;      // 4.3

    cout << " size of integer is " << sizeof(num) << endl;
    cout << " size of pointer is " << sizeof(ptr) << endl;
    cout << " size of pointer is " << sizeof(p2) << endl;
*/

    int num2 = 4;
    int a = num2;
    cout << "a before " << num2 << endl;
    a++;
    cout << "a after " << num2 << endl;

    int *p = &num2;
    cout << "before " << num2 << endl;
    (*p)++;
    cout << "after " << num2 << endl;

    // copying a pointer
    int *q = p;
    cout << p << " - " <<  q << endl;
    cout << *p << " - " << *q << endl;


    // important concept 

    int i = 3;
    int *t = &i;
    //cout << (*t)++ << endl;

    cout << " before t " << t << endl;
    t = t + 1;
    cout << " after t " << t << endl;






    return 0;
}