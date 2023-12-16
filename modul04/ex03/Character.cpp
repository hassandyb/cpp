/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hed-dyb <hed-dyb@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/16 14:45:50 by hed-dyb           #+#    #+#             */
/*   Updated: 2023/12/16 16:17:53 by hed-dyb          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

// Canonical form : ---------------------------------------------

Character::Character(std::string const & name) : name(name)
{
	for(int i = 0; i < 4; i++)
		this->inventory[i] = NULL;
	std::cout << "Character " << this->name << " created" << std::endl;
}

Character::Character(const Character & other)
{
	std::cout << "Character copy constructor called" << std::endl;
	*this = other;
}

Character & Character::operator=(const Character & other)
{
	std::cout << "Character assignement operator called" << std::endl;
	if(this != &other)
	{
		this->name = other.name;
		for(int i = 0; i < 4; i++)
			this->inventory[i] = other.inventory[i];
	}
	return *this;
}

Character::~Character()
{
	std::cout << "Charactor destructor called" << std::endl;

}

// The rest : ---------------------------------------------------

std::string const & Character::getName() const
{
	return this->name;
}

void Character::equip(AMateria * m)
{
	for(int i = 0; i < 4; i++)
		if(this->inventory[i] == NULL)
		{
			this->inventory[i] = m;
			std::cout << "Character " << this->name << " equipped with " << m->getType() << std::endl; 
		}
	std::cout << "Character " << this->name << " can't equip " << m->getType() << std::endl;
}

void Character::unequip(int idx)
{
	if(this->inventory[idx] != NULL)
	{
		this->inventory[idx] = NULL;
		std::cout << "Character " << this->name << " unequipped" << std::endl;
	}
	else
		std::cout << "Character " << this->name << " can't unequip" << std::endl;
}

void Character::use(int idx, ICharacter & target)
{
	if(this->inventory[idx] != NULL)
	{
		// something
	}
	else
		std::cout << "Character " << this->name << " cant use" << std::endl;
}



