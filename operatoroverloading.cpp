//Polymorphism - operator overloading
#include <iostream>
using namespace std;

// Class to demonstrate operator overloading
class Complex {
private:
    float real;
    float imag;

public:
    // Default constructor
    Complex() : real(0), imag(0) {}

    // Parameterized constructor
    Complex(float r, float i) : real(r), imag(i) {}

    // Overload the + operator
    Complex operator + (const Complex& obj) {
        Complex temp;
        temp.real = real + obj.real;
        temp.imag = imag + obj.imag;
        return temp;
    }

    // Overload the << operator for output
    friend ostream& operator << (ostream& output, const Complex& obj) {
        output << obj.real << " + " << obj.imag << "i";
        return output;
    }
};

int main() {
    // Create two complex numbers
    Complex c1(3.4, 2.5);
    Complex c2(1.2, 3.7);

    // Use the overloaded + operator to add two complex numbers
    Complex c3 = c1 + c2;

    // Use the overloaded << operator to display the result
    cout << "c1 = " << c1 << endl;
    cout << "c2 = " << c2 << endl;
    cout << "c1 + c2 = " << c3 << endl;

    return 0;
}
