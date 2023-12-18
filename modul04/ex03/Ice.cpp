/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hed-dyb <hed-dyb@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/16 10:55:52 by hed-dyb           #+#    #+#             */
/*   Updated: 2023/12/18 17:53:29 by hed-dyb          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

// Canonical Form : -------------------------------------------------------------

Ice::Ice() : AMateria("ice") // call AMateria parameterized constructor
{

}

Ice::Ice(const Ice & other)
{

	*this = other;
}

Ice & Ice::operator=(const Ice & other)
{

	if(this != &other)
	{
		this->type = other.type;
	}
	return *this;
}

Ice::~Ice()
{

}


// The rest : ------------------------------------------------------------------

AMateria * Ice::clone() const
{
	AMateria *newcopy = new Ice(); // call the copy constructor of Ice
	return newcopy;
}

void Ice::use(ICharacter& target)
{
	std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl; 
}


