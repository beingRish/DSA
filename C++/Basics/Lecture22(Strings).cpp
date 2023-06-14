#include<iostream>
using namespace std;

/****************  Length of the String    ****************/
int getLength(char name[]){

    int count = 0;
    for(int i = 0; name[i] != '\0'; i++){
        count++;
    }
    return count;
}

/****************  Reverse the String    ****************/
void reverse(char name[], int n){
    int s = 0;
    int e = n-1;

    while(s<e){
        swap(name[s++], name[e--]);
    }
}

/****************  converting character to lower case   *****************/
char toLowerCase(char ch){
    if(ch >= 'a' && ch <= 'z')
        return ch;
    else{
        char temp = ch - 'A' + 'a';
        return temp;
    }
}

/****************  Check Palindrome    ****************/
bool checkPalindrome(char a[], int n){
    int s = 0;
    int e = n-1;

    while(s<=e){
        if(toLowerCase( a[s] ) != toLowerCase( a[e] )){
            return 0;
        }
        else{
            s++;
            e--;
        }
    }

    return 1;
}

int main(){
    /*  String in c++ -> 1-Dimensional char Arrays  */

    char name[20];

    cout << "Enter your name : ";
    cin >> name;

    cout << "Your name is ";
    cout << name << endl;

        /*  Length of the String    */
    int len = getLength(name);
    cout << " Length: " << len << endl;

    
        /*  Reverse of the String   */
    reverse(name, len);
    cout << " Your Reversed Name: " << name << endl;

        /*  Check the String is Palindrome or not   */
    cout << " Palindrome or Not: " << checkPalindrome(name, len) << endl;

        /*  Making character case sensitive    */
    cout << " CHARACTER is " << toLowerCase('b') << endl;   // b
    cout << " CHARACTER is " << toLowerCase('C') << endl;   // c

    return 0;
}