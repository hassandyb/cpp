
#include <iostream>

void ft_change(std::string &str_ref)
{
    str_ref = "smething new";
}
int main ()
{
    std::string str = "Hi hassan ..";

    
    //example 1
    // std::string &str_ref = str;
    // std::cout << str_ref << std::endl;

    // example 2
    //str = NULL 
    //std::string &str_ref = str;

    // example 3
    // std::cout << str << std::endl;
    // ft_change(str);
    // std::cout << str << std::endl;

    //example 4
    // std::string &str_ref = str;
    // std::cout << str << "  " << str_ref << std::endl;
    // str = "new thing";
    // std::cout << str << "  " << str_ref << std::endl;

    

}



