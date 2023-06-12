                        // Doubly Ended Queue
#include<iostream>
#include<deque>
using namespace std;

int main(){

    deque<int> d;

    d.push_back(1);
    d.push_front(2);

    // d.pop_back();

    cout << "Print First Index Element -> " << d.at(1) << endl;     //Print First Index Element -> 1

    cout << "front : " << d.front() << endl;    // front : 2
    cout << "back : " << d.back() << endl;      // back : 1

    cout << "Empty or not " << d.empty() << endl;   // Empty or not 0

    cout << "before erase : " << d.size() << endl;  // 2
    d.erase(d.begin(), d.begin()+1);
    cout << "after erase : " << d.size() << endl;   // 1

    for(int i:d){
        cout << i << endl;      // 1
    }
}