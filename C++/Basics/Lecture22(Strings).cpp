#include<iostream>
using namespace std;

int getLength(char name[]){

    int count = 0;
    for(int i = 0; name[i] != '\0'; i++){
        count++;
    }
    return count;
}

void reverse(char name[], int n){
    int s = 0;
    int e = n-1;

    while(s<e){
        swap(name[s++], name[e--]);
    }
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


    return 0;
}