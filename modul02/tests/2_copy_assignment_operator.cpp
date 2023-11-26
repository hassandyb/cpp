

#include <iostream>


class test
{
	public:
	int data;
	test(int data) : data(data) {};
	test(const test& other) : data(other.data) {};
	test & operator=(const test & other) 
	{
		if(this != &other)
		{
			this->data = other.data;
		}
		return *this;
	};

};

int main ()
{
	test a(23);
	test b(0);

	//copy inis
	b = a;//assignement operator
	// test b(a);//copy constructor

	std::cout << a.data << std::endl;
	std::cout << b.data << std::endl;




}