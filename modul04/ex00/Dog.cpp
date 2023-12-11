/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hed-dyb <hed-dyb@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/11 14:20:43 by hed-dyb           #+#    #+#             */
/*   Updated: 2023/12/11 14:51:06 by hed-dyb          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

//Canonical form -----------------------------

Dog::Dog() : Animal() 
{
	std::cout << "Dog default constructor called" << std::endl;
}

Dog::Dog(const Dog & other) : Animal(other)
{
	std::cout << "Dog copy constractor called" << std::endl;
	*this = other;
}

Dog & Dog::operator=(const Dog & other)
{
	std::cout << "Dog assignement operator called" << std::endl;
	if(this  != &other)
	{
		this->type = other.type;
	}
	return *this;
}

Dog::~Dog()
{
	std::cout << "Dog destructor called" << std::endl;
}

Dog::Dog(std::string type) : Animal(type)
{
	std::cout << "Dog parameterized constuctor called" << std::cout;
}