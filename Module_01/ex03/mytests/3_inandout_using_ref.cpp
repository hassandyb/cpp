
#include <iostream>


class test
{
    public:
        int i;
        test(int i) : i(i) {};
        void ft_chage_with_obj(int new_i);
};

void test::ft_chage_with_obj(int new_i)
{
    this->i = new_i;
}

int main ()
{
    test obj(45);
    std::cout << obj.i << std::endl;
    obj.ft_chage_with_obj(33);
    std::cout << obj.i << std::endl;
}