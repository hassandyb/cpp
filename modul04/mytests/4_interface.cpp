
#include <iostream>

// Interface
class Shape {
public:
    virtual double calculate() const = 0; // Pure virtual function
};

// Derived class
class A : public Shape {
private:
    double value;

public:
    A(double v) : value(v) {}

    // Implementation of pure virtual function
    double calculate() const  {
        return 3.14 * value * value;
    }
};

// Another derived class
class B : public Shape {
private:
    double length, width;

public:
    B(double l, double w) : length(l), width(w) {}

    // Implementation of pure virtual function
    double calculate() const  {
        return length * width;
    }
};

int main() {
    A aObject(5.0);
    B bObject(4.0, 6.0);

    // Using the interface through pointers
    Shape* shape1 = &aObject;
    Shape* shape2 = &bObject;

    // Calling interface function without knowing the specific implementation
    double result1 = shape1->calculate();
    double result2 = shape2->calculate();
    std::cout << "Result 1: " << result1 << std::endl;
    std::cout << "Result 2: " << result2 << std::endl;
    // Use the calculated values as needed
    // ...

    return 0;
}
