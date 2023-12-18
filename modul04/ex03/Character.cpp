/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hed-dyb <hed-dyb@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/16 14:45:50 by hed-dyb           #+#    #+#             */
/*   Updated: 2023/12/18 18:07:04 by hed-dyb          ###   ########.fr       */
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
				delete this->inventory[i];
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
	if(this->inventory[idx] != NULL)
	{

		this->inventory[idx] = NULL;
	}

}

void Character::use(int idx, ICharacter & target)
{
	if(this->inventory[idx] != NULL)
	{
		this->inventory[idx]->use(target);
		//inside inventory there is Amateria pointers obj
		// now we call the use function of that object.
	}
}



