#include <iostream>
using namespace std;

// Base class Parent
class Parent {
public:
    Parent() {
        cout << "Parent class" << endl;
    }
};

// Single Inheritance: Child inherits from Parent
class Child : public Parent {
public:
    Child() {
        cout << "Child class" << endl;
    }
};

// Multi-level Inheritance: GrandChild inherits from Child, which inherits from Parent
class GrandChild : public Child {
public:
    GrandChild() {
        cout << "GrandChild class" << endl;
    }
};

// Multiple Inheritance: Combining features of two or more parent classes
class AnotherParent {
public:
    AnotherParent() {
        cout << "Another Parent class" << endl;
    }
};

// Class derived from two base classes
class MultipleInheritanceChild : public Parent, public AnotherParent {
public:
    MultipleInheritanceChild() {
        cout << "MultipleInheritanceChild class" << endl;
    }
};

// Hierarchical Inheritance: Multiple classes inherit from the same base class
class Sibling1 : public Parent {
public:
    Sibling1() {
        cout << "Sibling1 class" << endl;
    }
};

class Sibling2 : public Parent {
public:
    Sibling2() {
        cout << "Sibling2 class" << endl;
    }
};

// Hybrid Inheritance: Combination of two or more types of inheritance
class HybridChild : public Child, public AnotherParent {
public:
    HybridChild() {
        cout << "HybridChild class" << endl;
    }
};

int main() {
    cout << "Single Inheritance:" << endl;
    Child c;

    cout << "\nMulti-level Inheritance:" << endl;
    GrandChild gc;

    cout << "\nMultiple Inheritance:" << endl;
    MultipleInheritanceChild mic;

    cout << "\nHierarchical Inheritance:" << endl;
    Sibling1 s1;
    Sibling2 s2;

    cout << "\nHybrid Inheritance:" << endl;
    HybridChild hc;

    return 0;
}

// Types of Inheritance
// 1. Single Inheritance: A derived class with only one base class (Child -> Parent).
// 2. Multi-level Inheritance: A derived class is a base class for another class (GrandChild -> Child -> Parent).
// 3. Multiple Inheritance: A derived class with more than one base class (MultipleInheritanceChild -> Parent, AnotherParent).
// 4. Hierarchical Inheritance: Multiple derived classes from a single base class (Sibling1, Sibling2 -> Parent).
// 5. Hybrid Inheritance: A combination of two or more types of inheritance (HybridChild -> Child, AnotherParent).
