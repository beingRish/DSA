#include<iostream>
#include<stack>
using namespace std;

int main() {

    // creating of stack
    stack<int> s;

    // push operation
    s.push(2);
    s.push(3);

    // pop
    s.pop();

    cout << "Printing top element " << s.top() << endl;     // 2

    if(s.empty()) {
        cout << "Stack is empty" << endl;
    }
    else{
        cout << "Stack is not empty" << endl;
    }

    cout << "Size of stack is " << s.size() << endl;    // 1

    return 0;
}