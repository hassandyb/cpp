


#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

#include <iostream>
#include <string>
#include "contact.hpp"

using std::cout;
using std::endl;
using std::string;
using std::getline;
using std::cin;

class phonebook
{
public:
    phonebook() : count(0) {};
    int count;
    contact data[8];

    void    ft_add();
    void    ft_search();
    void    ft_desplay_contacts();
    
};
#endif