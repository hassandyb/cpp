/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hed-dyb <hed-dyb@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/11 13:38:06 by hed-dyb           #+#    #+#             */
/*   Updated: 2023/12/19 15:50:02 by hed-dyb          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

// Canonical form : ---------------------------------------------

Animal::Animal() : type("Default_Animal")
{
	std::cout << "Animal default constructor called" << std::endl;
}

Animal::Animal(const Animal & other)
{
	std::cout << "Animal copy constructor called" << std::endl;
	*this = other;
}

Animal & Animal::operator=(const Animal & other)
{
	std::cout << "Animal assignement operator called" << std::endl;
	if(this != &other)
		this->type = other.type;
	return *this;
}

Animal::~Animal()
{
	std::cout << "Animal destructor called" << std::endl;
}

// the rest ---------------------------------------------------------

Animal::Animal(const std::string & type) : type(type)
{
	std::cout << "Animal parameterized constructor called" << std::endl;

}

std::string Animal::getType() const
{
	return this->type;
}

void Animal::setType(std::string type) 
{
	this->type = type; 
}

