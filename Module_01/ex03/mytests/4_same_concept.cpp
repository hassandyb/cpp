
#include <iostream>

class Test {
    int *i;

    public:
        void setInt(int &i) {
            this->i = &i;
        }

        void logInt() {
            std::cout << *i << std::endl;
        }
};

int main () {

    Test te;
    int i = 10;

    te.setInt(i);
    te.logInt();
    i = 20;

    te.logInt();

}