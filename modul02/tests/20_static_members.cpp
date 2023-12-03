


#include <iostream>


// Static member function

// It can access only static members (both variables and functions)
// You can call a static member function without creating an instance.

// class test
// {
// 	public :
// 	static const int i = 4675;
// 	static int ft_example() { return i;}
// };

// int main ()
// {
// 	int result = test::ft_example();
// 	std::cout << result << std::endl;
// }



// Static member variable

// shared by all instances (objects) of the class. 

class test
{
	public :
	static int count;
	
};
int test::count = 11;

int main ()
{
	

	test obj1;
	test obj2;
	std::cout << obj1.count << std::endl;
	std::cout << obj2.count << std::endl;
	obj1.count = 12;
	std::cout << obj2.count << std::endl;

	std::cout << test::count << std::endl;
}