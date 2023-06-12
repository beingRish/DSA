#include<iostream>
#include<queue>
using namespace std;

int main(){

    queue<string> q;

    q.push("Rishabh");
    q.push("Singh");
    q.push("Rajput");

    cout << "First Element: " << q.front() << endl; // Rishabh

    cout << "Size before pop : " << q.size() << endl;

    q.pop();

    cout << "First Element: " << q.front() << endl; // Singh

    cout << "Size after pop : " << q.size() << endl;
    

}
