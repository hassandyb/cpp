/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hed-dyb <hed-dyb@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/08 16:16:18 by hed-dyb           #+#    #+#             */
/*   Updated: 2023/12/09 15:39:14 by hed-dyb          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"


// canonical form : -----------------------------------

ClapTrap::ClapTrap() : name("Default_name"), hit_points(10), energy_points(10), attack_damage(0)
{
	// std::cout << "ClapTrap default constructor called" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap & other)
{
	// std::cout << "ClapTrap copy constractor called" << std::endl;
	*this = other;
}

ClapTrap & ClapTrap::operator=(const ClapTrap & other)
{
	// std::cout << "ClapTrap assignement operator called" << std::endl;
	if(this != &other)// if this and other point to the same object
	{
		this->name = other.name;
		this->hit_points = other.hit_points;
		this->energy_points = other.energy_points;
		this->attack_damage = other.attack_damage;
	}
	return *this;
}

ClapTrap::~ClapTrap()
{
	// std::cout << "ClapTrap destructor called" << std::endl;
}

// exercise requerements : -----------------------------------

ClapTrap::ClapTrap(std::string name) : name(name), hit_points(10), energy_points(10), attack_damage(0)
{
	// std::cout << "ClapTrap parameterized constractor called" << std::endl;
}

void ClapTrap::attack(const std::string & target)
{
	if(this->hit_points > 0 && this->energy_points > 0)
	{
		std::cout << "ClapTrap " << this->name << " attacks ";
		std::cout << target << ", causing " << this->attack_damage;
		std::cout << " points of damage!" << std::endl;
		energy_points = energy_points - 1;
	}
	else
		std::cout << "ClapTrap" << this->name << " can't attack!" << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount)
{
	if(hit_points > 0)
	{
		std::cout << "ClapTrap " << this->name << " takes " << amount << " damages." << std::endl;

		hit_points = hit_points - amount;

		if(hit_points < 0)
			hit_points = 0;
	}
	else // case hit_points == 0
		std::cout << "ClapTrap " << this->name << " is already dead, it can't take any damages anymore." << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount)
{
	if(hit_points > 0 && energy_points > 0)
	{
		std::cout << "ClapTrap " << this->name << " is repaired by " << amount << " hit points." << std::endl;
		hit_points = hit_points + amount;
		energy_points = energy_points - 1;
	}
	else // case hit_points == 0 or energy_points <= 0
		std::cout << "ClapTrap " << this->name << " cant be repaired" << std::endl;


}