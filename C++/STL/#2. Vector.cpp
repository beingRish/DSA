#include<iostream>
#include<vector>
using namespace std;

int main(){

    vector<int> v;

    vector<int> a(5,1);

    vector<int> last(a);

    cout << "print a : ";
    for(int i:a){
        cout << i <<" ";    // print a : 1 1 1 1 1 
    }cout << endl;

    cout << "print last : ";
    for(int i:last){
        cout << i <<" ";    // print last : 1 1 1 1 1 
    }cout << endl;

    cout << "Capacity -> " << v.capacity() << endl;    // Capacity -> 0

    v.push_back(1);
    cout << "Capacity -> " << v.capacity() << endl;    // Capacity -> 1

    v.push_back(2);
    cout << "Capacity -> " << v.capacity() << endl;    // Capacity -> 2

    v.push_back(3);
    cout << "Capacity -> " << v.capacity() << endl;    // Capacity -> 4

    cout << "Size -> " << v.size() << endl;            // Size -> 3

    cout << "Element at 2nd Index -> " << v.at(2) << endl;  // Element at 2nd Index -> 3

    cout << "First Element -> " << v.front() << endl;         // output : First Element -> 1
    cout << "Last Element -> " << v.back() << endl;           // output : Last Element -> 3

    cout << "before pop : ";
    for(int i:v){
        cout << i << " ";    // before pop : 1 2 3
    }cout << endl;

    v.pop_back();

    cout << "after pop : ";
    for(int i:v){
        cout << i << " ";   // after pop : 1 2
    }cout << endl;

    cout << "before clear size : " << v.size() << endl; // before clear size : 2
    v.clear();
    cout << "after clear size : " << v.size() << endl;  // after clear size : 0



}