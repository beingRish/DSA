#include<iostream>
using namespace std;

bool checkPalindromeByIteration(string s, int i, int j){

/*                               Method - 1
    string str = s;

    while(i<j){
        swap(s[i], s[j]);
        i++;
        j--;
    }

    if(str==s)
        return true;
    else
        return false;
*/

/*                              Method - 2
*/
    bool ans;

    while(i<j){
        if(s[i]==s[j])
            ans = true;
        else
            ans = false;

        i++;
        j--;
    }
    return ans;
}

bool checkPalindromeByRecursion(string s, int i, int j){

    // base case
    if(i>j)
        return true;

    if(s[i] != s[j])
        return false;
    else{
        // Recursive call
        return checkPalindromeByRecursion(s, i+1, j-1);
    }
}

int main(){

    string str = "madam";

    bool isPalindrome = checkPalindromeByIteration(str, 0, str.length()-1);
    //bool isPalindrome = checkPalindromeByRecursion(str, 0, str.length()-1);

    if(isPalindrome)
        cout << "Palindrome" << endl;
    else
        cout << "Not Palindrome" << endl;

    return 0;
}