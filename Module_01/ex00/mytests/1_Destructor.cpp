




#include <iostream>

#include <iostream>

class MyClass {
public:
    MyClass() {
        std::cout << "Constructor called" << std::endl;
    }

    ~MyClass() {
        std::cout << "Destructor called" << std::endl;
    }
};

int main() {
    MyClass obj; // Constructor called
    // obj goes out of scope, Destructor called
    return 0;
}

