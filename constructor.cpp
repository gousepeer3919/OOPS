#include <iostream> // Include the input-output stream library
using namespace std; // Use the standard namespace

// Define a class named Rectangle
class Rectangle {
public:
    int l; // Length of the rectangle
    int b; // Breadth of the rectangle

    Rectangle() { // Default constructor
        l = 0;
        b = 0;
    }

    Rectangle(int x, int y) { // Parameterized constructor
        l = x;
        b = y;
    }

    Rectangle(Rectangle &r) { // Copy constructor
        l = r.l;
        b = r.b;
    }

    ~Rectangle() { // Destructor
        cout << "Destructor is called" << endl;
    }
};

int main() {
    Rectangle r1; // Default constructor is called
    cout << r1.l << " " << r1.b << endl; // Output: 0 0

    Rectangle r2(2, 3); // Parameterized constructor is called
    cout << r2.l << " " << r2.b << endl; // Output: 2 3

    Rectangle r3 = r2; // Copy constructor is called
    cout << r3.l << " " << r3.b << endl; // Output: 2 3

    Rectangle* r4 = new Rectangle(); // Default constructor is called
    delete r4; // Destructor is called for r4

    return 0; // End of the program
}
