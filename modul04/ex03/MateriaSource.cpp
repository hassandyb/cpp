/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hed-dyb <hed-dyb@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/17 16:21:08 by hed-dyb           #+#    #+#             */
/*   Updated: 2023/12/18 17:59:19 by hed-dyb          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

// Canonical form : ---------------------------------------------

MateriaSource::MateriaSource()
{
	for(int i = 0; i < 4; i++)
	{
		materias[i] = NULL;
	}
}

MateriaSource::MateriaSource(const MateriaSource & other)
{
	*this = other;
}

MateriaSource & MateriaSource::operator=(const MateriaSource & other)
{

	if(this != &other)
	{
		for(int i = 0; i < 4; i++)
		{
			if(materias[i] != NULL)
				delete materias[i];
			materias[i] = other.materias[i]->clone();
		}
	}
	return *this;
}

MateriaSource::~MateriaSource()
{
	for(int i = 0; i < 4; i++)
	{
		if(materias[i] != NULL)
			delete materias[i];
	}


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






