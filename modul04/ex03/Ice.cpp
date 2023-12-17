/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hed-dyb <hed-dyb@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/16 10:55:52 by hed-dyb           #+#    #+#             */
/*   Updated: 2023/12/17 15:01:01 by hed-dyb          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

// Canonical Form : -------------------------------------------------------------

Ice::Ice() : AMateria("ice") // call AMateria parameterized constructor
{
	std::cout << "Ice default constructor called" << std::endl;
}

Ice::Ice(const Ice & other)
{
	std::cout << "Ice copy constructor called" << std::endl;
	*this = other;
}

Ice & Ice::operator=(const Ice & other)
{
	std::cout << "Ice copy assigenement operator called" << std::endl;
	if(this != &other)
	{
		this->type = other.type;
	}
	return *this;
}

Ice::~Ice()
{
	std::cout << "Ice destructor called" << std::endl;
}


// The rest : ------------------------------------------------------------------

AMateria * Ice::clone() const
{
	AMateria *newcopy = new Ice(*this); // call the copy constructor of Ice
	return newcopy;
}

void use(ICharacter& target)
{
	std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl; 
}


