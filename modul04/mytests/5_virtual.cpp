

#include <iostream>

class parent
{
	public:
		virtual void ft_function()
		{
			std::cout << "parent" << std::endl;
		}
};

class child : public parent
{
	public:
		virtual void ft_function()
		{
			std::cout << "child" << std::endl;
		}
};

int main ()
{
	parent *p = new child();

	p->ft_function();
}