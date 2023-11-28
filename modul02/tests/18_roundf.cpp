


#include <iostream>
#include <cmath>

int main() {
    float floatingNumber = 12.445;

    // Using roundf to round the floating-point number to the nearest integer
    float roundedNumber = roundf(floatingNumber);

    std::cout << "Original Floating-Point Number: " << floatingNumber << std::endl;
    std::cout << "Rounded Number: " << roundedNumber << std::endl;

    return 0;
}
