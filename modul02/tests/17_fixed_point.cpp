


#include <iostream>
class test 
{
	private :
		int i;
		static const int frac = 2;
	public :
		test (int i) : i(i) {};

		int get_integer_part () const ;

}

int test::get_integer_part () const 
{
	return  i;
}

int get_fractional_part () const 
{
	return frac;
}


int main() {
    FixedPoint fp(3);
    
    // Print the integer part directly
    std::cout << "Fixed Point Value: " << fp.getIntegerPart() << std::endl;

    return 0;
}''