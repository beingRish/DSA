#include<iostream>
#include<array>
using namespace std;

int main(){

    int basic[3] = {1,2,3};

    array<int, 4> a = {1,2,3,4};

    int size = a.size();

    for(int i=0; i<size; i++){
        cout << a[i] << " ";          // output : 1 2 3 4
    }

    cout << endl;
    cout << "Element at 2nd Index -> " << a.at(2) << endl;      // output : Element at 2nd Index -> 3

    cout << "Empty or not -> " << a.empty() << endl;           // output : Empty or not -> 0

    cout << "First Element -> " << a.front() << endl;         // output : First Element -> 1
    cout << "Last Element -> " << a.back() << endl;           // output : Last Element -> 4
}