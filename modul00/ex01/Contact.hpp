/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hed-dyb <hed-dyb@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/21 14:31:18 by hed-dyb           #+#    #+#             */
/*   Updated: 2023/11/25 14:47:08 by hed-dyb          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
#define CONTACT_HPP

#include <iostream>
#include <string>
#include <iomanip> // for setw
using std::string;
using std::cout;
using std::endl;

class Contact
{
private:
    int index;
    string firstname;
    string lastname;
    string nickname;
    string phonenumber;
    string darkestsecret;
public:
    void setindex(int idx);
    void setfirstname(string str);
    void setlastname(string str);
    void setnickname(string str);
    void setnumber(string str);
    void setsecret(string str);

    int getindex();
    string getfirstname();
    string getlastname();
    string getnickname();
    string getnumber();
    string getsecret();
    
    int ft_check_empty();
    void ft_show_info();
    void ft_show_full_info();
};

#endif