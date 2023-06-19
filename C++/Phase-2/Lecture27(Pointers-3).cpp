#include<iostream>
using namespace std;

// ********************************* Double Pointer ************************************

void update(int **p2){

    //p2 = p2 + 1;
    // kuchh change hoga?? - NO

    //*p2 = *p2 + 1;
    // // kuchh change hoga?? - YES

    **p2 = **p2 + 1;
    // // kuchh change hoga?? - YES


}

int main(){
/*
    int i = 5;
    int* p = &i;
    int** p2 = &p;

    cout << endl << " Sab sahi chal rha hai " << endl << endl;

    cout << i << endl;          // 5
    cout << *p << endl;         // 5
    cout << **p2 << endl;       // 5

    cout << endl;

    cout << &i << endl;
    cout << p << endl;
    cout << *p2 << endl;

    cout << endl;

    cout << &p << endl;
    cout << p2 << endl;


    cout << endl;

    cout << " before " << i << endl;
    cout << " before " << p << endl;
    cout << " before " << p2 << endl;

    update(p2);

    cout << " after " << i << endl;
    cout << " after " << p << endl;
    cout << " after " << p2 << endl;

    cout << endl;
*/

    // ****************************** MCQs *****************************

/* Q-1 :=>
    int first = 8;
    int second = 18;
    int *ptr = &second;
    *ptr = 9;
    cout << first << " " << second << endl;  // 8 9 - correct
*/
/* Q-2 :=>
    int first = 6;
    int *p = &first;
    int *q = p;
    (*q)++;
    cout << first << endl;  // 7 - correct
*/
/* Q-3 :=>
    int first = 8;
    int *p = &first;
    cout << (*p)++ << " ";
    cout << first << endl;  // 8 9 - (mine was 9 8 wrong)
*/
/* Q-4 :=>
    int *p = 0;
    int first = 110;
    *p = first;     // error
    cout << *p << endl;      // correct
*/
/* Q-5 :=>
    int first = 8;
    int second = 11;
    int *third = &second;
    first = *third;
    *third = *third + 2;
    cout << first << " " << second << endl;     // 11 13
*/
/* Q-6 :=>
    float f = 12.5;
    float p = 21.5;
    float* ptr = &f;
    (*ptr)++;
    *ptr = p;
    cout << *ptr << " " << f << " " << p << endl;   // 21.5 21.5 21.5
*/
/* Q-7 :=>
    int arr[5];
    int *ptr;
    cout << sizeof(arr) << " " << sizeof(ptr) << endl;  //20 8
*/
/* Q-8 :=>
    int arr[] = {11, 21, 13, 14};
    cout << *(arr) << " " << *(arr+1) << endl;  // 11 21 (correct)
*/
/* Q-9 :=>
    int arr[6] = {11, 12, 31};
    cout << arr << " " << &arr << endl;     // address same_address (correct)
*/
/* Q-10 :=> 
    int arr[6] = {11, 21, 13};
    cout << (arr+1) << endl;    // address+4 (correct)
*/
/* Q-11 :=> 
    int arr[6] = {11, 12, 31};
    int *p = arr;
    cout << p[2] << endl;       // 31 (correct)
*/
/* Q-12 :=> 
    int arr[] = {11, 12, 13, 14, 15};
    cout << *(arr) << " " << *(arr + 3);    // 11 14 (correct)
*/
/* Q=13 :=>
    int arr[] = {11, 21, 31, 41};
    int *ptr = arr++;       // Error
    cout << *ptr << endl;   
*/
/* Q-14 :=>
    char ch = 'a';
    char* ptr = &ch;
    ch++;
    cout << *ptr << endl;   // b (correct)
*/
/* Q-15 :=>
    char arr[] = "abcde";
    char *p = &arr[0];
    cout << p << endl;  // abcde
*/
/* Q-16 :=>
    char arr[] = "abcde";
    char *p = &arr[0];
    p++;
    cout << p << endl;  // bcde
*/
/* Q-17 :=>
    char str[] = "babbar";
    char *p = str;
    cout << str[0] << " " << p[0] << endl;  // b b (correct)
*/
/* Q-18 :=>
    void update(int *p){
        *p = (*p) * 2;
    }

    int main(){
        int i = 10;
        update(&i);
        cout << i << endl;  // 20 (correct)
    }
*/
/* Q-19 :=>
    int first = 110;
    int *p = &first;
    int **q = &p;
    int second = (**q)++ + 9;
    cout << first << " " << second << endl;     // 111 119
*/
/* Q-20 :=> 
    int first = 100;
    int *p = &first;
    int **q = &p;
    int second = ++(**q);
    int *r = *q;
    ++(*r);
    cout << first << " " << second << endl;     // 102 101
*/
// Q-21 :=>
    void increament(int **p){
        ++(**p);
    }

    int main(){
        int num = 110;
        int *ptr = &num;
        increment(&ptr);
        cout << num << endl;    // 111
    }




    return 0;

}