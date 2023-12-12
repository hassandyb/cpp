/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hed-dyb <hed-dyb@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/12 17:54:36 by hed-dyb           #+#    #+#             */
/*   Updated: 2023/12/12 18:42:26 by hed-dyb          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

// Canonical form -----------------------------
WrongCat::WrongCat() : WrongAnimal("WrongCat")
{
	std::cout << "WrongCat default constructor called" << std::endl;
}

WrongCat::WrongCat(const WrongCat & other)
{
	std::cout << "WrongCat copy constructor called" << std::endl;
	*this = other;
}

WrongCat & WrongCat::operator=(const WrongCat & other)
{
	std::cout << "wrongcat assignement operator called" << std::endl;
	if (this != &other)
	{
		this->type = other.type;
	}
	return *this;
}

WrongCat::~WrongCat()
{
	std::cout << "WrongCat destructor called" << std::endl;
}

// the rest -------------------------------------

WrongCat::WrongCat(std::string type) : WrongAnimal(type)
{
	std::cout << "WrongCat parameterized constructor called" << std::endl;
}

void WrongCat::makeSound() const
{
	std::cout << "WrongCat meowing ..." << std::endl;
}