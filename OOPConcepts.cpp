#include <iostream>
using namespace std;

/*
==========================
CLASS = Blueprint
==========================
*/
class Parent {   // Base class (for inheritance)
public:
    
    // Constructor (runs automatically when object is created)
    Parent() {
        cout << "Parent Constructor called\n";
    }

    // Method / Function inside class
    void showParent() {
        cout << "This is Parent class method\n";
    }
};

/*
==========================
CHILD CLASS (Inheritance)
==========================
*/
class Child : public Parent {   // Inheritance
public:

    // Constructor of Child
    Child() {
        cout << "Child Constructor called\n";
    }

    void showChild() {
        cout << "This is Child class method\n";
    }
};

/*
==========================
INTERFACE (NOT real keyword in C++)
We simulate using abstract class
==========================
*/
class InterfaceExample {
public:
    virtual void display() = 0;  // Pure virtual function (Interface concept)
};

/*
==========================
IMPLEMENTATION OF INTERFACE
==========================
*/
class Demo : public InterfaceExample {
public:
    void display() {
        cout << "Interface method implemented\n";
    }
};

/*
==========================
MAIN FUNCTION
==========================
*/
int main() {

    // Object (instance of class)
    Parent p;      // Object of Parent class
    p.showParent(); // calling method

    cout << "\n";

    Child c;       // Object of Child class (also calls Parent constructor)
    c.showParent(); // inherited method
    c.showChild();  // child method

    cout << "\n";

    // Interface object using child class
    Demo d;        // Object (instance)
    d.display();   // method implementation

    return 0;
}