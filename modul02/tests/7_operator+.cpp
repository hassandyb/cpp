




#include <iostream>

class Point {
public:
    int x, y;

    Point operator+(const Point& other) {
        Point result;
        result.x = x + other.x;
        result.y = y + other.y;
        return result;
    }
};

int main() {
    Point p1{2, 3};
    Point p2{1, 4};

    Point p3 = p1 + p2; // Calls the overloaded + operator

    std::cout << "Result: (" << p3.x << ", " << p3.y << ")" << std::endl;
    return 0;
}

