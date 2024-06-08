#include <iostream> // Include the input-output stream library
using namespace std; // Use the standard namespace

// Define a class named ABC
class ABC {
    int x; // Private variable

public:
    void set(int n) { // Method to set the value of x
        x = n;
    }

    int get() { // Method to get the value of x
        return x;
    }
};

int main() {
    ABC object1; // Create an object of class ABC
    object1.set(1); // Set x to 1
    cout << object1.get() << endl; // Print the value of x (which is 1)

    return 0; // End of the program
}
