


#include <iostream>

class MyString 
{
public:
    std::string value;

    MyString(const std::string& s) : value(s) {}

    bool operator==(const MyString& other) const {
        return value == other.value;
    }
};

int main() {
    // MyString str1("hello");
    // MyString str2("world");
    // MyString str3("hello");

    // std::cout << "str1 == str2: " << (str1 == str2) << std::endl;
    // std::cout << "str1 == str3: " << (str1 == str3) << std::endl;
    return 0;
}
