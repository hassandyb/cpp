


#include <iostream>

class Myclass
{
	public:
		int data;
        std::string str;
        std::string 
		Myclass() {};
		Myclass(const Myclass& other);
};


Myclass::Myclass(const Myclass& other)
{
	std::cout << "copy constractor is called." << std::endl;
	this->data = other.data + 2;
}



int main ()
{
    Myclass a;
    std::cout << "hhh" << a.str << "---"<< std::endl;
    a.data = 42;


    // like this :
    // Myclass b = a;

    // or
    // Myclass b(a);

    // std::cout << a.data << std::endl;
    // std::cout << b.data << std::endl;
}
