/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hed-dyb <hed-dyb@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/16 10:56:27 by hed-dyb           #+#    #+#             */
/*   Updated: 2023/12/17 14:37:54 by hed-dyb          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

// Canonical form : ---------------------------------------------

Cure::Cure() : AMateria("cure")
{
	std::cout << "Cure default constructor called" << std::endl;
}

Cure::Cure(const Cure & other)
{
	std::cout << "Cure copy constructor called" << std::endl;
	*this = other;
}

Cure & Cure::operator=(const Cure & other)
{
	std::cout << "Cure copy assignement operator called" << std::endl;
	if (this != &other)
	{
		this->type = other.type;
	}
	return *this;
}

Cure::~Cure()
{
	std::cout << "Cure destructor called" << std::endl;
}

// The rest : ---------------------------------------------------

AMateria* Cure::clone() const
{
	AMateria *newcopy = new Cure(*this);//call the copy constructor of Cure
	return newcopy;
}

void	use(ICharacter& target)
{
	std::cout << "* heals " << target.getName() << "'s Wounds *" << std::endl;
}




