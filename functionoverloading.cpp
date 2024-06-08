#include<iostream>
using namespace std;

// Class to demonstrate function overloading
class Sum {
public:
    // Function to add two integers
    void add(int x, int y) {
        int sum = x + y;
        cout << "Sum of two integers: " << sum << endl;
    }

    // Function to add three integers
    void add(int x, int y, int z) {
        int sum = x + y + z;
        cout << "Sum of three integers: " << sum << endl;
    }

    // Function to add two floats
    void add(float x, float y) {
        float sum = x + y;
        cout << "Sum of two floats: " << sum << endl;
    }
};

int main() {
    Sum s; // Create an object of Sum class

    // Demonstrating function overloading
    s.add(2, 3); // Calls the add function with two integer parameters
    s.add(1, 2, 3); // Calls the add function with three integer parameters
    s.add(2.33f, 2.55f); // Calls the add function with two float parameters

    return 0;
}

// Function Overloading: The ability to define multiple functions with the same name
// but with different parameter lists. It allows functions to handle different types
// or numbers of parameters.

