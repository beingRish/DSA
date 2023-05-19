#include<iostream>
using namespace std;

// Check Upar case, Lower case or Special Character

int main(){
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
    }
}