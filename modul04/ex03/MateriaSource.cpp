/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hed-dyb <hed-dyb@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/17 16:21:08 by hed-dyb           #+#    #+#             */
/*   Updated: 2023/12/19 18:12:17 by hed-dyb          ###   ########.fr       */
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
			{
				delete materias[i];
				materias[i] = NULL;
			}
			if(other.materias[i] != NULL)
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

void MateriaSource::learnMateria(AMateria *m)
{
	if(m == NULL)
		return;
	for(int i = 0; i < 4; i++)
	{
		if(this->materias[i] == NULL)
		{
			this->materias[i] = m;
			return;
		}
	}
}

AMateria* MateriaSource::createMateria(std::string const & type)
{
	for(int i = 0; i < 4; i++)
	{
		if(this->materias[i] != NULL && materias[i]->getType() == type)
		{
			AMateria *newcopy = materias[i]->clone();
			return newcopy;
		}
	}
	return NULL;
}






