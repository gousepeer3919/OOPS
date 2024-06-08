#include <iostream>
using namespace std;

// Base class
class Parent {
public:
    // Virtual function to allow overriding in derived classes
    virtual void display() {
        cout << "Display from Parent class" << endl;
    }
};

// Derived class
class Child1 : public Parent {
public:
    // Override the display function from the Parent class
    void display() override {
        cout << "Display from Child1 class" << endl;
    }
};

// Another derived class
class Child2 : public Parent {
public:
    // Override the display function from the Parent class
    void display() override {
        cout << "Display from Child2 class" << endl;
    }
};

int main() {
    Parent* p;   // Pointer to Parent class
    Child1 c1;   // Object of Child1 class
    Child2 c2;   // Object of Child2 class

    // Demonstrating function overriding
    p = &c1;     // Pointer to Parent class now points to Child1 object
    p->display(); // Calls display() of Child1, demonstrating function overriding

    p = &c2;     // Pointer to Parent class now points to Child2 object
    p->display(); // Calls display() of Child2, demonstrating function overriding

    return 0;
}
