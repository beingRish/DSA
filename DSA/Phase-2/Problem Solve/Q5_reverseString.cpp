#include<iostream>
using namespace std;

void reverseByIteration(string& str, int i, int j){
    
    while(i<j){
        swap(str[i],str[j]);
        i++;
        j--;
    }
}

void reverseByRecursion(string& str, int i, int j){

   // base case
    if(i>j)
        return;

    // process
    swap(str[i], str[j]);
    i++;
    j--;

    // Recursive call
    reverseByRecursion(str, i, j);
}

int main(){
    string str = "Rishabh";

    int size = str.length();

    //reverseByIteration(str, 0, str.length()-1);
    reverseByRecursion(str, 0, str.length()-1);

    cout << str << endl;
    
}