#include <iostream>
using namespace std;

class Parent {
public:
    int x; // Public member: Accessible from anywhere

protected:
    int y; // Protected member: Accessible within the class and derived classes

private:
    int z; // Private member: Accessible only within the class
};

// Public Inheritance: Members retain their original access control
class Child1 : public Parent {
public:
    void display() {
        x = 10; // Accessible (public in Parent, remains public)
        y = 20; // Accessible (protected in Parent, remains protected)
        // z = 30; // Not accessible (private in Parent)
    }
};

// Private Inheritance: Members become private in the derived class
class Child2 : private Parent {
public:
    void display() {
        x = 10; // Accessible (public in Parent, becomes private)
        y = 20; // Accessible (protected in Parent, becomes private)
        // z = 30; // Not accessible (private in Parent)
    }
};

// Protected Inheritance: Members become protected in the derived class
class Child3 : protected Parent {
public:
    void display() {
        x = 10; // Accessible (public in Parent, becomes protected)
        y = 20; // Accessible (protected in Parent, remains protected)
        // z = 30; // Not accessible (private in Parent)
    }
};

int main() {
    Parent p;
    Child1 c1;
    Child2 c2;
    Child3 c3;

    // Accessing members through Parent object
    p.x = 10; // Accessible
    // p.y = 20; // Not accessible (protected in Parent)
    // p.z = 30; // Not accessible (private in Parent)

    // Accessing members through Child1 object (public inheritance)
    c1.x = 15; // Accessible (public in Child1)
    // c1.y = 25; // Not accessible (protected in Child1)
    // c1.z = 35; // Not accessible (private in Parent)

    // Accessing members through Child2 object (private inheritance)
    // c2.x = 15; // Not accessible (private in Child2)
    // c2.y = 25; // Not accessible (private in Child2)
    // c2.z = 35; // Not accessible (private in Parent)

    // Accessing members through Child3 object (protected inheritance)
    // c3.x = 15; // Not accessible (protected in Child3)
    // c3.y = 25; // Not accessible (protected in Child3)
    // c3.z = 35; // Not accessible (private in Parent)

    return 0;
}
