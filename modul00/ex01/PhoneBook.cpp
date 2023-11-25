/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hed-dyb <hed-dyb@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/21 14:29:26 by hed-dyb           #+#    #+#             */
/*   Updated: 2023/11/25 15:42:24 by hed-dyb          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

PhoneBook::PhoneBook() : count(0) {};

void PhoneBook::ft_add()
{
    std::string first;
    std::string last;
    std::string nick;
    std::string phone;
    std::string secret;
    
    std::cout << "Enter the first name : ";
    if(!std::getline(std::cin, first))
        exit(0);
    std::cout << "Enter the last name : ";
    if(!std::getline(std::cin, last))
        exit (0);
    std::cout << "Enter the nickname : ";
    if(!std::getline(std::cin, nick))
        exit (0);
    std::cout << "Enter the phone number : ";
    if(!std::getline(std::cin, phone))
        exit (0);
    std::cout << "Enter the darkest secret : ";
    if(!std::getline(std::cin, secret))
        exit (0);

    if(first == "" || last == "" || nick == "" || phone == "" || secret == "")
    {
        std::cout << std::endl << "Contact not regestered, please full all fields." << std::endl;
        return ;
    }

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

void    PhoneBook::ft_search()
{
    std::string index_str;
    int    index_int;
    if(this->count == 0 && this->data[0].ft_check_empty() == 1)
    {
       std::cout << "No contacts to show!"<< std::endl; 
       return ;
    }  
    ft_desplay_contacts();
    std::cout << "\nEnter index of contact to display : ";
    std::getline(std::cin, index_str);
    if(index_str.length() != 1 || (index_str[0] < '0' || index_str[0] > '7'))
    {
        std::cout << "Invalid input, Enter SEARCH again and enter a valid index." << std::endl;
        return ;
    }
    index_int = index_str[0] - '0';
    if(this->data[index_int].ft_check_empty() == 1)
    {
        std::cout << "Invalid input, Enter SEARCH again and enter a valid index." << std::endl;
        return ;
    }

    this->data[index_int].ft_show_full_info();
}

void ft_welcome()
{
    std::cout << std::endl;
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
    std::string command;

    ft_welcome();


    while(1)
    { 
        std::cout<<"Enter command: ";
        if(!std::getline(std::cin, command))
                exit(0);
        if(command.compare("ADD") == 0)
            book.ft_add();
        else if(command.compare("SEARCH") == 0)
            book.ft_search();
        else if(command.compare("EXIT") == 0)
            return (0);
        else
            std::cout<<"Command not found"<<std::endl; 
     }

}
