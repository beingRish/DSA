#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;

int main(){

    vector<int> v;

    v.push_back(1);
    v.push_back(3);
    v.push_back(6);
    v.push_back(7);

    cout << "Finding 6 : " << binary_search(v.begin(), v.end(),6) << endl;  // 1

    int a = 3;
    int b = 5;

    cout << "max -> " << max(a,b) << endl;
    cout << "min -> " << min(a,b) << endl;

    swap(a,b);
    cout << endl << "a->" << a << endl;

    string abcd = "abcd";
    reverse(abcd.begin(), abcd.end());
    cout<< "String -> " << abcd << endl;
}