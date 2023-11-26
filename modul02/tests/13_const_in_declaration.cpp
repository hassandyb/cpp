

#include <iostream>

class test 
{
	public:
		const int const_var;
		test() : const_var(1337) {}
};
int main ()
{
	//its value cannot be changed after initialization.
	test t;
	std::cout << t.const_var << std::endl;

	// t.const_var = 5346;

}