/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hed-dyb <hed-dyb@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/21 14:32:43 by hed-dyb           #+#    #+#             */
/*   Updated: 2023/11/25 14:55:58 by hed-dyb          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"


void Contact::setindex(int idx)
{
    this->index = idx;
}

void Contact::setfirstname(string str)
{
    this->firstname = str;
}

void Contact::setlastname(string str)
{
    this->lastname = str;
}

void Contact::setnickname(string str)
{
    this->nickname = str;
}

void Contact::setnumber(string str)
{
    this->phonenumber = str;
}

void Contact::setsecret(string str)
{
    this->darkestsecret = str;
}

int Contact::getindex()
{
    return (this->index);
}

string Contact::getfirstname()
{
    return (this->firstname);
}

string Contact::getlastname()
{
    return (this->lastname);
}

string Contact::getnickname()
{
    return (this->nickname);
}

string Contact::getnumber()
{
    return (this->phonenumber);
}

string Contact::getsecret()
{
    return (this->darkestsecret);
}

int Contact::ft_check_empty()
{
    if(this->firstname == "")
        return (1);
    return (0);

}

void ft_desplay_alined(string str)
{
    int i = str.length();

    if(i == 10)
        std::cout << str;
        
    else if(i < 10)
    {

        std::cout << std::setw(10) << str;
    }
    else
    {
        std::cout << str.substr(0, 9) << ".";
    }
}

void Contact::ft_show_info()
{
    std::cout << std::setw(9) << this->getindex() << "|";
    ft_desplay_alined(this->getfirstname());
    std::cout << "|";
    ft_desplay_alined(this->getlastname());
    std::cout << "|";
    ft_desplay_alined(this->getnickname());
    std::cout << "|" << endl;
}

void Contact::ft_show_full_info()
{
    std::cout << "index          : " << this->getindex() << endl;
    std::cout << "First name     : " << this->getfirstname() << endl;
    std::cout << "Last name      : " << this->getlastname() << endl;
    std::cout << "Nick name      : " << this->getnickname() << endl;
    std::cout << "Phone number   : " << this->getnumber() << endl;
    std::cout << "darkest secret : " << this->getsecret() << endl;
}