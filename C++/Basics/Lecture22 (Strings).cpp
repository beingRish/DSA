#include<iostream>
using namespace std;

/**************** Function to get Length of the String    ****************/
int getLength(char name[]){

    int count = 0;
    for(int i = 0; name[i] != '\0'; i++){
        count++;
    }
    return count;
}

/****************  Function to Reverse the String    ****************/
void reverse(char name[], int n){
    int s = 0;
    int e = n-1;

    while(s<e){
        swap(name[s++], name[e--]);
    }
}

/**************** Function to Make character case sensitive ****************/
char toLowerCase(char ch){
    if(ch >= 'a' && ch <= 'z')
        return ch;
    else{
        char temp = ch - 'A' + 'a';
        return temp;
    }
}

/****************  Function to Check Palindrome    ****************/
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

/*************** Function to find Maximum Occurrence of Characters in String ***************/

char getMaxOccCharacter(string s){

    int arr[26] = {0};

    // create an array of count of characters
    for(int i=0; i<s.length(); i++){
        char ch = s[i];
        // lowercase
        int number = 0;
        number = ch - 'a';
        arr[number]++;
    }

    // find maximum occ character
    int maxi = -1, ans = 0;
    for(int i=0; i<26; i++){
        if(maxi < arr[i]){
            ans = i;
            maxi = arr[i];
        }
    }

    char finalAns = 'a'+ans;
    return  finalAns;
}

int main(){
    //  String in c++ -> 1-Dimensional char Arrays

    /*
    char name[20];

    cout << "Enter your name : ";
    cin >> name;

    cout << "Your name is ";
    cout << name << endl;

        //  Length of the String    
    int len = getLength(name);
    cout << " Length: " << len << endl;

    
        //  Reverse of the String  
    reverse(name, len);
    cout << " Your Reversed Name: " << name << endl;

        //  Check the String is Palindrome or not   
    cout << " Palindrome or Not: " << checkPalindrome(name, len) << endl;

        //  converting character to lower case   
    cout << " CHARACTER is " << toLowerCase('b') << endl;   // b
    cout << " CHARACTER is " << toLowerCase('C') << endl;   // c
    */

        // Find Maximum Occurence of Character in a String.
        
    string s;
    cout << "Enter a String: ";
    cin >> s;

    cout << getMaxOccCharacter(s) << endl;

    

    return 0;
}