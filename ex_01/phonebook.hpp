


#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

#include <iostream>
#include "contact.hpp"
using std::cout;
using std::endl;
using std::string;
using std::getline;
using std::cin;

class phonebook
{
public:
    phonebook(){};
    int count  = 0;
    contact data[8];

    void    ft_add();
    void    ft_search();
    // void    ft_show();
    
};
#endif