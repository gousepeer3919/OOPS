#include <iostream>
using namespace std;

// Forward declaration of class Sum
class Sum;

class Numbers {
private:
    int a;
    int b;
    
public:
    // Constructor to initialize numbers
    Numbers(int x, int y) : a(x), b(y) {}

    // Declare the friend function
    friend void add(Numbers n, Sum s);
};

class Sum {
private:
    int total;

public:
    // Constructor to initialize total
    Sum() : total(0) {}

    // Function to set the total
    void setTotal(int t) {
        total = t;
    }

    // Function to display the total
    void displayTotal() const {
        cout << "Sum: " << total << endl;
    }

    // Declare the friend function
    friend void add(Numbers n, Sum s);
};

// Friend function definition
void add(Numbers n, Sum s) {
    s.total = n.a + n.b;
    cout << "Sum of Numbers: " << s.total << endl;
}

int main() {
    Numbers num(3, 4); // Create an object of Numbers class
    Sum s; // Create an object of Sum class

    // Call the friend function to add the numbers
    add(num, s);

    return 0;
}

// Friend Function: A function that is not a member of a class but has access to the class's private and protected members. 
// It is declared within the class but defined outside the class. 
// Friend functions allow external functions to access private members of a class.
