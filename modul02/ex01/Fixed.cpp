/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hed-dyb <hed-dyb@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/26 15:50:23 by hed-dyb           #+#    #+#             */
/*   Updated: 2023/11/27 21:24:05 by hed-dyb          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Fixed.hpp"

const int Fixed::frac = 8;

Fixed::Fixed() : value (0) 
{
	std::cout << "Default constructor called" << std::endl;
};


Fixed::Fixed(const int value) : value(value << frac)
{
	std::cout << "Int constructor called" << std::endl;

}

Fixed::F
Fixed & Fixed::operator=(const Fixed &fixed) 
{
	std::cout << "Copy Assignation operator called" << std::endl;
	this->value = fixed.value;
	return *this;
}

int Fixed::getRawBits(void ) const
{

	return this->value;
}

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
};

std::ostream & operator<<(std::ostream &os, Fixed const & fixed)
{
	os  << fixed.getRawBits();
	return os;	
}


