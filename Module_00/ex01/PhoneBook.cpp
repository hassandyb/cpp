/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hed-dyb <hed-dyb@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/21 14:29:26 by hed-dyb           #+#    #+#             */
/*   Updated: 2023/11/21 22:09:32 by hed-dyb          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

PhoneBook::PhoneBook() : count(0) {};

void PhoneBook::ft_add()
{
    string first;
    string last;
    string nick;
    string phone;
    string secret;
    
    cout << "Enter the first name : ";
    getline(cin, first);
    cout << "Enter the last name : ";
    getline(cin, last);
    cout << "Enter the nickname : ";
    getline(cin, nick);
    cout << "Enter the phone number : ";
    getline(cin, phone);
    cout << "Enter the darkest secret : ";
    getline(cin, secret);

    if(first == "" || last == "" || nick == "" || phone == "" || secret == "")
        return ;

    this->data[count].setfirstname(first);
    this->data[count].setlastname(last);
    this->data[count].setnickname(nick);
    this->data[count].setnumber(phone);
    this->data[count].setsecret(secret);
    this->data[count].setindex(count);

    this->count+= 1;
    if(this->count == 8)
        this->count = 0;
}

void PhoneBook::ft_desplay_contacts()
{
    int i = 0;
    int size;

    if(this->data[7].ft_check_empty() == 0)
        size = 8;
    else
        size = this->count;
    while(i < size)
    {
        this->data[i].ft_show_info();
        i++;
    }
}

int	ft_atoi(string str)
{
	return (str[0] - '0');
}

void    PhoneBook::ft_search()
{
    string index_str;
    int    index_int;
    if(this->count == 0 && this->data[0].ft_check_empty() == 1)
    {
       cout << "No contacts to show!"<< endl; 
       return ;
    }  
    ft_desplay_contacts();
    cout << "\nEnter index of contact to display : ";
    getline(cin, index_str);
    if(index_str.length() != 1 || (index_str[0] < '0' || index_str[0] > '7'))
    {
        cout << "Invalid input, Enter SEARCH again and enter a valid index." << endl;
        return ;
    }
    index_int = ft_atoi(index_str);
    if(this->data[index_int].ft_check_empty() == 1)
    {
        cout << "Invalid input, Enter SEARCH again and enter a valid index." << endl;
        return ;
    }

    this->data[index_int].ft_show_full_info();
}

void ft_welcome()
{
    cout << endl;
    std::cout << "              Welcome to the 80s Phonebook ☎                 " << std::endl;
    std::cout << "                                                              " << std::endl;
    std::cout << "                       Commands                               " << std::endl;
    std::cout << "                                                              " << std::endl;
    std::cout << "          1- Enter ADD    : To add a new contact.             " << std::endl;
    std::cout << "          2- Enter SEARCH : To search for a contact           " << std::endl;
    std::cout << "          3- Enter EXIT   : to quite the program.             " << std::endl;
    std::cout << "                                                              " << std::endl;
    std::cout << "                                                              " << std::endl;
}

int main ()
{
    PhoneBook book;
    string command;

    ft_welcome();


    while(getline(cin, command))
    { 
        if(command.compare("ADD") == 0)
            book.ft_add();
        if(command.compare("SEARCH") == 0)
            book.ft_search();
        if(command.compare("EXIT") == 0)
            return (0);   
     }

}