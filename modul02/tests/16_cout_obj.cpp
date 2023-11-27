


#include <iostream>

#include <iostream>

class test {
public:
    int a;
    test(int a) : a(a) {}
};

// Define the << operator overload for the test class outside the class
std::ostream & operator<<(std::ostream& os, const test& obj) {
    os << obj.a;
    return os;
}

std::istream &  operator>>(std::istream & is, test &obj)
{
	is >> obj.a;
	return is;
}
int main() {

	//input :
    // test t(67344);
    // std::cout << t << std::endl;

	//output
	test t(0);
	std::cout << t << std::endl;
	std::cout << "Enter a number: ";
	std::cin >> t;
	std::cout << t << std::endl;



    return 0;
}



