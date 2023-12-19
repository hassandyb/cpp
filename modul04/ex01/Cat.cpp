/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hed-dyb <hed-dyb@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/12 13:30:01 by hed-dyb           #+#    #+#             */
/*   Updated: 2023/12/19 15:03:15 by hed-dyb          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

// Canonical form -------------------------------------------------------------

Cat::Cat() : Animal("Cat")
{
	std::cout << "Cat default constructor called" << std::endl;
	this->catbrain = new Brain();
}

Cat::Cat(const Cat & other)
{
	std::cout << "Cat copy constructor called" << std::endl;
	*this = other;
}

Cat & Cat::operator=(const Cat & other)
{
	std::cout << "Cat assignement operator called" << std::endl;
	if (this != &other)
	{
		this->type = other.type;
		delete this->catbrain;
		this->catbrain = new Brain(*other.catbrain);
	}
	return *this;
}

Cat::~Cat()
{
	std::cout << "Cat destructor called" << std::endl;
	delete this->catbrain;
}

// rest -----------------------------------------------------------------------

Cat::Cat(const std::string & type) : Animal(type)
{
	std::cout << "Cat parameterized constructor called" << std::endl;
	this->catbrain = new Brain();
}

void	Cat::makeSound() const
{
	std::cout << "Cat meowing ..." << std::endl;
}

