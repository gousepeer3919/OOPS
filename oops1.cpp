#include <iostream> // Include the input-output stream library
using namespace std; // Use the standard namespace

// Define a class named Fruit
class Fruit {
public:
    string name;  // Name of the fruit
    string color; // Color of the fruit
};

/* 
class Student {
    string name;    // Name of the student
    int rollnumber; // Roll number of the student
}
*/

int main() {
    Fruit apple; // Create an object of class Fruit
    apple.name = "Apple"; // Set name to "Apple"
    apple.color = "Red"; // Set color to "Red"
    cout << "Fruit: " << apple.name << ", Color: " << apple.color << endl;

    Fruit* mango = new Fruit(); // Dynamically create an object of class Fruit
    mango->name = "Mango"; // Set name to "Mango"
    mango->color = "Yellow"; // Set color to "Yellow"
    cout << "Fruit: " << mango->name << ", Color: " << mango->color << endl;

    delete mango; // Free the dynamically allocated memory

    return 0; // End of the program
}
