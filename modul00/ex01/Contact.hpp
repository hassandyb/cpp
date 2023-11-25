/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hed-dyb <hed-dyb@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/21 14:31:18 by hed-dyb           #+#    #+#             */
/*   Updated: 2023/11/25 15:36:48 by hed-dyb          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
#define CONTACT_HPP

#include <iostream>
#include <string>
#include <iomanip> // for setw


class Contact
{
    private:
        int index;
        std::string firstname;
        std::string lastname;
        std::string nickname;
        std::string phonenumber;
        std::string darkestsecret;
    
    public:
        void setindex(int idx);
        void setfirstname(std::string str);
        void setlastname(std::string str);
        void setnickname(std::string str);
        void setnumber(std::string str);
        void setsecret(std::string str);

        int getindex();
        std::string getfirstname();
        std::string getlastname();
        std::string getnickname();
        std::string getnumber();
        std::string getsecret();
        
        
        int ft_check_empty();
        void ft_show_info();
        void ft_show_full_info();
};

#endif