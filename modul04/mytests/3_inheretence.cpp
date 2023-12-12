

#include <iostream>

// class parent
// {
// 	public:
// 		int i;
// 		parent(int i) : i(i) {}

// };


// class child : public parent
// {
// 	public:
// 		child(int i) : parent(i) {}
// 		child(const child &obj) : parent(obj.i) {}
// 		child &operator=(const child &obj)
// 		{
// 			if (this != &obj)
// 				this->i = obj.i;
// 			return (*this);
// 		}
// };

class a_class
{
	public:
		int i;
		a_class(int i) : i(i) {}
};

class b_class
{
	public:
		int j;
		b_class(int j) : j(j) {}
};

int main ()
{
	// a_class a(11);
	// b_class b(22);

	 a_class *p1  =  new b_class(33);

}