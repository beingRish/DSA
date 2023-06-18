/*
    -> Map is the data structure in which data can be stored in key-value pair.
    -> Key is unique and one key points only one value.
*/


#include<iostream>
#include<map>

using namespace std;

int main(){

    map<int, string> m;

    m[1] = "Rishabh";
    m[2] = "Singh";
    m[13] = "Rajput";

    m.insert( {5, "Badan"} );

    for(auto i:m){
        cout << i.first << "  " << i.second << endl;

        /*
            1  Rishabh
            2  Singh
            5  Badan
            13  Rajput
        */
    }
}