/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hed-dyb <hed-dyb@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/16 10:30:37 by hed-dyb           #+#    #+#             */
/*   Updated: 2023/12/16 10:55:04 by hed-dyb          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"


// Canonical form : ------------------------------------------------------------

AMateria::AMateria() : type("default_amateria")
{
	std::cout << "AMateria constructor called" << std::cout;
}

AMateria::AMateria(AMateria const & other)
{
	std::cout << "AMateria copy constructor called" << std::endl;
	*this = other;
}

AMateria & AMateria::operator=(AMateria const & other)
{
	std::cout << "AMateria assignement operator called" << std::endl;
	if(this != &other)
		this->type = other.type;
	return *this;
}

AMateria::~AMateria()
{
	std::cout << "AMateria destructor called" << std::endl;
}

// Parameterized constructor ---------------------------------------------------

AMateria::AMateria(std::string const & type) : type(type)
{
	std::cout << "AMateria parameterized constructor called" << std::endl;
}

// Getter : -------------------------------------------------------------------

std::string const & AMateria::getType() const
{
	return this->type;
}


