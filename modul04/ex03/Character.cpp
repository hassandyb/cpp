/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hed-dyb <hed-dyb@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/16 14:45:50 by hed-dyb           #+#    #+#             */
/*   Updated: 2023/12/19 18:14:29 by hed-dyb          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

// Canonical form : ---------------------------------------------

Character::Character(std::string const & name) : name(name)
{
	for(int i = 0; i < 4; i++)
		this->inventory[i] = NULL;

}

Character::Character(const Character & other)
{
	*this = other;
}

Character & Character::operator=(const Character & other)
{
	if(this != &other)
	{
		this->name = other.name;
		for(int i = 0; i < 4; i++)
		{
			if(this->inventory[i] != NULL)
			{
				delete this->inventory[i];
				this->inventory[i ] = NULL;
			}
			if(other.inventory[i] != NULL)
				this->inventory[i] = other.inventory[i]->clone();

		}
			
	}
	return *this;
}

Character::~Character()
{
	for(int i = 0; i < 4; i++)
	{
		if(this->inventory[i] != NULL)
			delete this->inventory[i];
	}


}

// The ICharacter interface functions : ---------------------------------------------------

std::string const & Character::getName() const
{
	return this->name;
}

void Character::equip(AMateria * m)
{
	if(m == NULL)
		return ;
	for(int i = 0; i < 4; i++)
	{
		if(this->inventory[i] == NULL)
		{
			this->inventory[i] = m;

			return ;
		}
	}
}

void Character::unequip(int idx)
{
	if(idx >= 4 || idx < 0)
		return ;
	if(this->inventory[idx] != NULL)
	{
		this->inventory[idx] = NULL;
	}

}

void Character::use(int idx, ICharacter & target)
{
	if(idx >= 4 || idx < 0)
		return ;
	if(this->inventory[idx] != NULL)
	{
		this->inventory[idx]->use(target);
		
	}
}



