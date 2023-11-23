

#include <iostream>

template <typename T>
T add(T a, T b) {
    return a + b;
}

int main() {
    std::cout << add(5, 7) << std::endl;        // Calls the int version
    std::cout << add(3.5, 2.7) << std::endl;    // Calls the double version
    return 0;
}


