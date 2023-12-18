/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hed-dyb <hed-dyb@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/16 10:56:27 by hed-dyb           #+#    #+#             */
/*   Updated: 2023/12/18 17:57:59 by hed-dyb          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

// Canonical form : ---------------------------------------------

Cure::Cure() : AMateria("cure")
{

}

Cure::Cure(const Cure & other)
{

	*this = other;
}

Cure & Cure::operator=(const Cure & other)
{

	if (this != &other)
	{
		this->type = other.type;
	}
	return *this;
}

Cure::~Cure()
{

}

// The rest : ---------------------------------------------------

AMateria* Cure::clone() const
{
	AMateria *newcopy = new Cure();//call the copy constructor of Cure
	return newcopy;
}

void	Cure::use(ICharacter& target)
{
	std::cout << "* heals " << target.getName() << "'s wounds *" << std::endl;
}




