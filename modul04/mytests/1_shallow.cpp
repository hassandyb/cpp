


#include <iostream>

class ShallowCopyExample {
public:
    int* data;

    ShallowCopyExample(int val) {
        data = new int(val);
    }

    ~ShallowCopyExample() {
        delete data;
    }
};

int main() {
    ShallowCopyExample obj1(42);

    // Shallow copy
    ShallowCopyExample obj2 = obj1;

    std::cout << *obj1.data << std::endl;  // Outputs: 42
    std::cout << *obj2.data << std::endl;  // Outputs: 42

    // Modifying through one object affects the other
    *obj1.data = 99;

    std::cout << *obj1.data << std::endl;  // Outputs: 99
    std::cout << *obj2.data << std::endl;  // Outputs: 99

    return 0;
}
