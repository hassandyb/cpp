

#include <iostream>

class Parent {
public:
    Parent() {
        std::cout << "Parent constructor" << std::endl;
    }

    virtual ~Parent() {
        std::cout << "Parent destructor" << std::endl;
    }
};

class Child : public Parent {
public:
    Child() {
        std::cout << "Child constructor" << std::endl;
    }

    ~Child()  {
        std::cout << "Child destructor" << std::endl;
    }
};

int main() {
    Parent* ptr = new Child();
    delete ptr;

    return 0;
}
