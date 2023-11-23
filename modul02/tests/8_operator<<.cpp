#include <iostream>

class MyClass {
public:
    int value;

    MyClass(int v) : value(v) {}

    friend std::ostream& operator<<(std::ostream& os, const MyClass& obj) {
        os << obj.value;
        return os;
    }
};

int main() {
    MyClass obj(42);

    std::cout << "Object value: " << obj << std::endl; // Calls the overloaded << operator
    return 0;
}
