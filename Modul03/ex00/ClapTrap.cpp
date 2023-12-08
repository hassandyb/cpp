/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hed-dyb <hed-dyb@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/08 16:16:18 by hed-dyb           #+#    #+#             */
/*   Updated: 2023/12/08 18:49:40 by hed-dyb          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"


// canonical form : -----------------------------------

ClapTrap::ClapTrap() : name("Default_name"), hit_points(10), energy_points(10), attack_damage(0)
{
	std::cout << "ClapTrap default constructor called" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap & other)
{
	std::cout << "ClapTrap copy constractor called" << std::endl;
	*this = other;
}

ClapTrap & ClapTrap::operator=(const ClapTrap & other)
{
	std::cout << "ClapTrap assignement operator called" << std::endl;
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
	std::cout << "ClapTrap destructor called" << std::endl;
}

// exercise requerements : -----------------------------------

ClapTrap::ClapTrap(std::string name) : name(name), hit_points(10), energy_points(10), attack_damage(0)
{
	std::cout << "ClapTrap parameterized constractor called" << std::endl;
}

void ClapTrap::attack(const std::string & target)
{
	std::cout << "ClapTrap " << this->name;
	std::cout << " attacks " << target;
	std::cout << ", causing " << 

	hit_points = hit_points - 1;
}

void ClapTrap::takeDamage(unsigned int amount)
{

}

void ClapTrap::beRepaired(unsigned int amount)
{

}
