/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hed-dyb <hed-dyb@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/12 13:30:01 by hed-dyb           #+#    #+#             */
/*   Updated: 2023/12/12 18:39:55 by hed-dyb          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

// Canonical form -------------------------------------------------------------

Cat::Cat() : Animal("Cat")
{
	std::cout << "Cat default constructor called" << std::endl;
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
	}
	return *this;
}

Cat::~Cat()
{
	std::cout << "Cat destructor called" << std::endl;
}

// rest -----------------------------------------------------------------------

Cat::Cat(std::string type) : Animal(type)
{
	std::cout << "Cat parameterized constructor called" << std::endl;
}

void	Cat::makeSound() const
{
	std::cout << "Cat meowing ..." << std::endl;
}

