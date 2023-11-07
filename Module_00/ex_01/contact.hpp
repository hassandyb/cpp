



#ifndef CONTACT_HPP
#define CONTACT_HPP

#include <iostream>

using std::string;
using std::cout;
using std::endl;

class contact
{
private:
    int index;
    string firstname;
    string lastname;
    string nickname;
    string phonenumber;
    string darkestsecret;
public:
    void ft_addindex(int idx);
    void ft_addfirstname(string str);
    void ft_addlastname(string str);
    void ft_addnickname(string str);
    void ft_addnumber(string str);
    void ft_addsecret(string str);
    int ft_check_empty();
    void ft_show_info();
    void ft_show_full_info();
    
    
    void ft_print_contact() // to remove later 
    {
        std::cout << this->index << " | " << this->firstname << " | " << this->lastname;
        std::cout << " | " << this->nickname << " | " << this->phonenumber;
        std::cout << " | " << darkestsecret << std::endl;
    }
   

};

#endif