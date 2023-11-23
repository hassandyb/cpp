

#include <iostream>


int add (int a , int b)
{
	std ::cout << "int add was called" << std::endl;
	return a+b;
}

double add (double a , double b)
{
	std ::cout << "double add was called" << std::endl;
	return a+b;
}

int main ()
{
	// The compiler determines which function
	std::cout << add(5,7) << std::endl;
	std::cout << add(5.5,7.4) << std::endl;

}