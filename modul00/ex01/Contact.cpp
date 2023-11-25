/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hed-dyb <hed-dyb@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/21 14:32:43 by hed-dyb           #+#    #+#             */
/*   Updated: 2023/11/25 15:33:41 by hed-dyb          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"


void Contact::setindex(int idx)
{
    this->index = idx;
}

void Contact::setfirstname(std::string str)
{
    this->firstname = str;
}

void Contact::setlastname(std::string str)
{
    this->lastname = str;
}

void Contact::setnickname(std::string str)
{
    this->nickname = str;
}

void Contact::setnumber(std::string str)
{
    this->phonenumber = str;
}

void Contact::setsecret(std::string str)
{
    this->darkestsecret = str;
}

int Contact::getindex()
{
    return (this->index);
}

std::string Contact::getfirstname()
{
    return (this->firstname);
}

std::string Contact::getlastname()
{
    return (this->lastname);
}

std::string Contact::getnickname()
{
    return (this->nickname);
}

std::string Contact::getnumber()
{
    return (this->phonenumber);
}

std::string Contact::getsecret()
{
    return (this->darkestsecret);
}

int Contact::ft_check_empty()
{
    if(this->firstname == "")
        return (1);
    return (0);

}

void ft_desplay_alined(std::string str)
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
    std::cout << "|" << std::endl;
}

void Contact::ft_show_full_info()
{
    std::cout << "index          : " << this->getindex() << std::endl;
    std::cout << "First name     : " << this->getfirstname() << std::endl;
    std::cout << "Last name      : " << this->getlastname() << std::endl;
    std::cout << "Nick name      : " << this->getnickname() << std::endl;
    std::cout << "Phone number   : " << this->getnumber() << std::endl;
    std::cout << "darkest secret : " << this->getsecret() << std::endl;
}
