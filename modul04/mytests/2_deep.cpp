


#include <iostream>

class DeepCopyExample {
public:
    int* data;

    DeepCopyExample(int val) {
        data = new int(val);
    }

    DeepCopyExample(const DeepCopyExample& other) {
        data = new int(*other.data);
    }

    ~DeepCopyExample() {
        delete data;
    }
};

int main() {
    DeepCopyExample obj1(42);

    // Deep copy
    DeepCopyExample obj2 = obj1;

    std::cout << *obj1.data << std::endl;  // Outputs: 42
    std::cout << *obj2.data << std::endl;  // Outputs: 42

    // Modifying through one object does not affect the other
    *obj1.data = 99;

    std::cout << *obj1.data << std::endl;  // Outputs: 99
    std::cout << *obj2.data << std::endl;  // Outputs: 42

    return 0;
}
