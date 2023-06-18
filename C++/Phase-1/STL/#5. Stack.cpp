#include<iostream>
#include<stack>
using namespace std;

                    // Last in First Out

int main(){
    stack<string> s;

    s.push("Rishabh");
    s.push("Kumar");
    s.push("Singh");

    cout << "Top Element -> " << s.top() << endl;   // Singh

    s.pop();
    cout << "Top Element -> " << s.top() << endl;   // Kumar

    cout << "Size of stack : " << s.size() << endl; // 2

    cout << "Empty or not : " << s.empty() << endl; // false

}