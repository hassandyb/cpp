/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hed-dyb <hed-dyb@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/10 13:24:42 by hed-dyb           #+#    #+#             */
/*   Updated: 2023/12/10 16:12:42 by hed-dyb          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

//Canonical form -----------------------------

FragTrap::FragTrap() : ClapTrap()
{
	std::cout << "FragTrap default constructor called" << std::endl;
	this->hit_points = 100;
	this->energy_points = 100;
	this->attack_damage = 30;
}

FragTrap::FragTrap(const FragTrap & other) : ClapTrap(other)
{
	std::cout << "FragTrap copy constructor called" << std::endl;
	*this = other;
}

FragTrap & FragTrap::operator=(const FragTrap & other)
{
	std::cout << "FragTrap copy assignement operator called" << std::endl;
	if(this != &other)
	{
		this->name = other.name;
		this->hit_points = other.hit_points;
		this->energy_points = other.energy_points;
		this->attack_damage = other.attack_damage;
	}
	return *this;
}

FragTrap::~FragTrap()
{
	std::cout << "FragTrap destructor called" << std::endl;
}

// Ex01 requirements -----------------------------

FragTrap::FragTrap(std::string name) : ClapTrap(name)
{
	std::cout << "FragTrap parameterized constructor called" << std::endl;
	this->hit_points = 100;
	this->energy_points = 100;
	this->attack_damage = 30;
}


// here .........
void FragTrap::guardgate()
{
	std::cout << "FragTrap " << this->name  << " has enterred in Gate keeper mode" << std::endl;
}

void FragTrap::attack(const std::string & target)
{
	if(this->hit_points > 0 && this->energy_points > 0)
	{
		std::cout << "FragTrap " << this->name << " attacks " << target << ", causing " << this->attack_damage;
		std::cout << " points of damage!" << std::endl;

		energy_points = energy_points - 1;
	}
	else 
		std::cout << "FragTrap " << this->name << " can't attack!" << std::endl;
}

void FragTrap::highFivesGuys(void)
{
	if(this->energy_points > 0)
		std::cout << "FragTrap " << this->name << " got a high five!" << std::endl;
	else
		std::cout << "FragTrap " << this->name << " can't get a high five!" << std::endl;
}

