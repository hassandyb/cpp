/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hed-dyb <hed-dyb@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/16 10:30:37 by hed-dyb           #+#    #+#             */
/*   Updated: 2023/12/18 17:48:41 by hed-dyb          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"


// Canonical form : ------------------------------------------------------------

AMateria::AMateria() : type("default_amateria")
{

}

AMateria::AMateria(AMateria const & other)
{
	*this = other;
}

AMateria & AMateria::operator=(AMateria const & other)
{
	if(this != &other)
		this->type = other.type;
	return *this;
}

AMateria::~AMateria()
{
	
}

// Parameterized constructor ---------------------------------------------------

AMateria::AMateria(std::string const & type) : type(type)
{
	
}

// Getter : -------------------------------------------------------------------

std::string const & AMateria::getType() const
{
	return this->type;
}

void AMateria::use(ICharacter & target)
{
	(void)target;
}

