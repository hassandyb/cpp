/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hed-dyb <hed-dyb@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/16 14:45:50 by hed-dyb           #+#    #+#             */
/*   Updated: 2023/12/17 16:05:25 by hed-dyb          ###   ########.fr       */
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
			std::cout << "The Amateria " << m->getType() << " has been equipped inside ";
			std::cout << this->name << "'s inventory" << std::endl;
			return ;
		}
		std::cout << "The inventory is full" << std::endl;
	}
}

void Character::unequip(int idx)
{
	if(this->inventory[idx] != NULL)
	{
		this->inventory[idx] = NULL;
		std::cout << "The Amateria " << this->inventory[idx]->getType() << "has been unequipped." << std::endl;
	}
	else
		std::cout << "The inventory of the index " << idx << " is empty." << std::endl;
}

void Character::use(int idx, ICharacter & target)
{
	if(this->inventory[idx] != NULL)
	{
		this->inventory[idx]->use(target);
		//inside inventory there is Amateria pointers obj
		// now we call the use function of that object.
	}
	else
		std::cout << "The inventory of the index " << idx << " is empty." << std::endl;
}



