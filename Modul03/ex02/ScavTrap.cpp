/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hed-dyb <hed-dyb@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/10 13:21:10 by hed-dyb           #+#    #+#             */
/*   Updated: 2023/12/10 13:24:14 by hed-dyb          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

// Canonical form -----------------------------

ScavTrap::ScavTrap() : ClapTrap()
{
	std::cout << "ScavTrap default constructor called" << std::endl;
	this->hit_points = 100;
	this->energy_points = 50;
	this->attack_damage = 20;

}

ScavTrap::ScavTrap(const ScavTrap & other) : ClapTrap(other)
{
	std::cout << "ScavTrap copy constructor called" << std::endl;
	*this = other;
}

ScavTrap & ScavTrap::operator=(const ScavTrap & other)
{
	std::cout << "ScavTrap copy assignement operator called" << std::endl;
	if(this != &other)
	{
		this->name = other.name;
		this->hit_points = other.hit_points;
		this->energy_points = other.energy_points;
		this->attack_damage = other.attack_damage;

	}
	return *this;
}

ScavTrap::~ScavTrap()
{
	std::cout << "ScavTrap destructor called" << std::endl;
}


// Ex01 requirements -----------------------------

ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
{
	std::cout << "ScavTrap parameterized constractor called" << std::endl;
	this->hit_points = 100;
	this->energy_points = 50;
	this->attack_damage = 20;

}

void ScavTrap::guardGate()
{
	std::cout << "ScavTrap " << this->name << " has entered in Gate keeper mode" << std::endl;
}

void ScavTrap::attack(const std::string & target)
{
	if(this->hit_points > 0 && this->energy_points > 0)
	{
		std::cout << "ScavTrap " << this->name << " attacks ";
		std::cout << target << ", casuing " << this->attack_damage;
		std::cout << " points of damage!" << std::endl;
		energy_points = energy_points - 1;
	}
	else
		std::cout << "ScavTrap " << this->name << " can't attack!" << std::endl;
}



