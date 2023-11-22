/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hed-dyb <hed-dyb@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/21 14:32:43 by hed-dyb           #+#    #+#             */
/*   Updated: 2023/11/21 22:10:23 by hed-dyb          ###   ########.fr       */
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
        cout << str;
        
    else if(i < 10)
    {
        cout << str;
        for (int j = 0; j < 10 - i; j++)
            cout << " ";
    }
    else
    {
        for(int j = 0; j < 9 ; j++)
           cout <<  str[j];
        cout << ".";
    }
}

void Contact::ft_show_info()
{
    cout << this->getindex() << "|";
    ft_desplay_alined(this->getfirstname());
    cout << "|";
    ft_desplay_alined(this->getlastname());
    cout << "|";
    ft_desplay_alined(this->getnickname());
    cout << endl;
}

void Contact::ft_show_full_info()
{
    cout << "index          : " << this->getindex() << endl;
    cout << "First name     : " << this->getfirstname() << endl;
    cout << "Last name      : " << this->getlastname() << endl;
    cout << "Nick name      : " << this->getnickname() << endl;
    cout << "Phone number   : " << this->getnumber() << endl;
    cout << "darkest secret : " << this->getsecret() << endl;
}