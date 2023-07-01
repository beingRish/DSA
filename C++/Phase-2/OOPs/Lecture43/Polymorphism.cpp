#include<iostream>
using namespace std;

class A {
    public:
                // Function Overloading
        
        void sayHello() {
            cout << "Hello Rishabh" << endl;
        }

        void sayHello(string name) {
            cout << "Hello " << name << endl;
        }

        int sayHello(char age) {
            return age;
        }
};

class B {
    public:
                //  Operator Overloading
        int a;
        int b;

    public:
        int add() {
            return a+b;
        }

        void operator+ (B &obj) {
            int value1 = this -> a;
            int value2 = obj.a;
            cout << "output " << value2 - value1 << endl;   // 3
        }

        void operator() () {
            cout << "main Bracket hu " << this->a << endl;
        }
};

            // Function Overriding

class Animal {
    public:
    void speak() {
        cout << "Speaking " << endl;
    }
};

class Dog: public Animal {
    public:
    void speak(){
        cout << "Barking " << endl;
    }
};

int main(){
/*
    A n;
    n.sayHello();
    n.sayHello("Ritik");
    cout << "Age = " << n.sayHello(23) << endl;


    B obj1, obj2;
    obj1.a = 4;
    obj2.a = 7;
    obj1 + obj2;

    obj1 + obj2;
    obj1();
*/

    Dog obj;
    obj.speak();
}