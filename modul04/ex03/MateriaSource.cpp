/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hed-dyb <hed-dyb@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/17 16:21:08 by hed-dyb           #+#    #+#             */
/*   Updated: 2023/12/18 11:42:44 by hed-dyb          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

// Canonical form : ---------------------------------------------

MateriaSource::MateriaSource()
{
	// std::cout << "materiaSource constructor called" << std::endl;
	for(int i = 0; i < 4; i++)
	{
		materias[i] = NULL;
	}
}

MateriaSource::MateriaSource(const MateriaSource & other)
{
	// std::cout << "MateriaSource copy constructor called" << std::endl;
	*this = other;
}

MateriaSource & MateriaSource::operator=(const MateriaSource & other)
{
	// std::cout << "MateriaSource copy assignement operator called" << std::endl;
	if(this != &other)
	{
		for(int i = 0; i < 4; i++)
		{
			materias[i] = other.materias[i];
		}
	}
	return *this;
}

MateriaSource::~MateriaSource()
{
	// std::cout << "MateriaSource destructor called" << std::endl;

}

// The IMateriaSource interface functions : ---------------------

// this functions adds a materias to materias[4] if it s possible
void MateriaSource::learnMateria(AMateria *m)
{
	for(int i = 0; i < 4; i++)
	{
		if(this->materias[i] == NULL)
		{
			this->materias[i] = m;
			return;
		}
	}
}
// this function will simply searches for the type(cure, ice, somethingelse) intered as paramter
// the first one it matches on the materias[4] it simply make a new copy of it a nd return it
AMateria* MateriaSource::createMateria(std::string const & type)
{
	for(int i = 0; i < 4; i++)
	{
		if(this->materias[i] != NULL && materias[i]->getType() == type)// finding aa cure/ice obj with type entered as paramter.
		{
			AMateria *newcopy = materias[i]->clone();// call clone function of ice/cure obj
			return newcopy;
		}
	}
	return NULL;
}






