/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hed-dyb <hed-dyb@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/12 18:41:36 by hed-dyb           #+#    #+#             */
/*   Updated: 2023/12/14 17:16:01 by hed-dyb          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

// Canonical form : -----------------------------------------------

WrongAnimal::WrongAnimal() : type("Default_WrongAnimal")
{
	std::cout << "WrongAnimal default constractor called" << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal & other)
{
	std::cout << "WrongAnimal copy constructor called" << std::endl;
	*this = other;
}

WrongAnimal & WrongAnimal::operator=(const WrongAnimal & other)
{
	std::cout << "WrongAnimal assignement operator called" << std::endl;
	if(this != & other)
		this->type = other.type;
	return *this;
}

WrongAnimal::~WrongAnimal()
{
	std::cout << "WrongAnimal destructor called" << std::endl;
}

// ex00 ---------------------------------------------------------

WrongAnimal::WrongAnimal(const std::string & type) : type(type)
{
	std::cout << "WrongAnimal parameterized constructor called" << std::endl;

}

std::string WrongAnimal::getType() const
{
	return this->type;
}

void WrongAnimal::setType(std::string type)
{
	this->type = type;
}

void WrongAnimal::makeSound() const
{
	std::cout << "WrongAnimal sound" << std::endl;
}