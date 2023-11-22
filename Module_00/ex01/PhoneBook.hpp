/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hed-dyb <hed-dyb@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/21 14:27:06 by hed-dyb           #+#    #+#             */
/*   Updated: 2023/11/21 22:09:46 by hed-dyb          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>




#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

#include <iostream>
#include <string>
#include "Contact.hpp"

using std::cout;
using std::endl;
using std::string;
using std::getline;
using std::cin;

class PhoneBook
{
public:
    PhoneBook();;
    int count;
    Contact data[8];

    void    ft_add();
    void    ft_search();
    void    ft_desplay_contacts();
    
};
#endif
