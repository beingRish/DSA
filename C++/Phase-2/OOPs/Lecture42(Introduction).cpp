/*
        ****************** OOPs *****************

        -> It is type of programming technique where things resolves around objects
           so that readability/maintainability/extandibility increases.

        Class :- -> It is a user defined data type.
                 -> It is a complex data type.
                 -> It is collection of members.
                    i) data members(variables)
                    ii) member function(methods)
                 -> Class is a container.
                 -> Class provides the concept of encaptulation.
                 -> Class provides the concept of data hiding with private declaration.
                 -> Class is a blue print(Original copy) to construct objects.
                 -> It is a plan before constructing objects.
                 -> Class is a logical copy to create objects

        Object :- Object is an real-world entity which has properties and behaviour.
                  It is a variable of type class.
                  Object is an instance/copy of class.
                  It is a physical representation of class.

        Constructor :- It is a special type of method that consists of well defined statements which executes automatically during creation of object.
                       No return type.
                       No i/p parameter.

        this keyword :- Address of current object is stored on 'this' keyword.
                        this is a pointer which point the current object.

        Destructor :- Destructor is used to deallocate the memory.
                      create automatically after creation of object.
                      name should be same as class
                      no return type
                      no input parameter
                      for static object destructor automatically called.
                      for dynamically object destructor called manually.

        static keyword :- Creates data member which belongs to class.
                          No need to create object to access the static data member.

        static function :- static function access only static data member.


*/


#include <iostream>
#include <string.h>
using namespace std;

class Hero{

    private:
        int health;

    public:
        char *name;
        char level;
        static int timeToComplete;  // static data member

        // constructor
        Hero() {
            cout << "Simple Constructor called" << endl;
            name = new char[100];
        }

        // parameterized constructor
        Hero(int health){
            this -> health = health;
        }

        Hero(int health, char level){
            this -> health = health;
            this -> level = level;
        }

        // copy constructor
        Hero(Hero& temp){
            cout << "Copy constructor called " << endl;
            this -> health = temp.health;
            this -> level = temp.level;
        }

    void print(){
        cout << endl << "[ ";
        cout << "Name: " << this->name << " ,";
        cout << "health " << this->health << " ,";
        cout << "level " << this->level << " ]";
    }

    //    *************************** getter & setter **********************

    int getHealth() {
        return health;
    }

    char getLevel() {
        return level;
    }

    void setHealth(int h) {
        health = h;
    }

    void setLevel(char ch) {
        level = ch;
    }

    void setName(char name[]){
        strcpy(this->name, name);
    }

    // static function
    static int random(){
        return timeToComplete;
    }

    // destructor
    ~Hero() {
        cout << "Desutructor called " << endl;
    }


};

int Hero::timeToComplete = 5;

int main(){

    cout << Hero::timeToComplete << endl;
    cout << Hero::timeToComplete << endl;


/*
    // static
    Hero a;

    // Dynamic
    Hero * b = new Hero();
    delete b;
*/


    /*                     ***** copy constructor *****

    Hero S(70, 'C');
    S.print();


    Hero R(S);

    R.print();
*/


/*
    // object created statically
    Hero ramesh(10);
    //cout << "Address of ramesh " << &ramesh << endl;
    ramesh.print();

    // dynamically
    Hero *h = new Hero(11);
    h->print();

    Hero temp(22, 'B');
    temp.print();
*/

/*
    // static allocation
    Hero a;

    a.setHealth(80);
    a.setLevel('B');

    cout << "Level is " << a.level << endl;
    cout << "Health is " << a.getHealth() << endl;

    // dynamically
    Hero *b = new Hero;

    b->setLevel('A');
    b->setHealth(70);

    cout << "Level is " << (*b).level << endl;
    cout << "Health is " << (*b).getHealth() << endl;

    cout << "Level is " << b->level << endl;
    cout << "Health is " << b->getHealth() << endl;
*/


/*
    // creation of Object
    Hero ramesh;

    cout << "Ramesh health is " << ramesh.getHealth() << endl;
    // use setter
    ramesh.setHealth(70);
    ramesh.level = 'A';

    cout << "health is: " << ramesh.getHealth() << endl;
    cout << "Level is: " << ramesh.level << endl;

    //cout << "size : " << sizeof(ramesh) << endl;
*/





    return 0;
}
