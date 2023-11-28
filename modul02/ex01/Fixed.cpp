/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hed-dyb <hed-dyb@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/26 15:50:23 by hed-dyb           #+#    #+#             */
/*   Updated: 2023/11/28 12:56:53 by hed-dyb          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

const int Fixed::frac = 8;

//constractors
Fixed::Fixed() : value (0) 
{
	std::cout << "Default constructor called" << std::endl;
};

Fixed::Fixed(const int value) 
{
	std::cout << "Int constructor called" << std::endl;
	this->value = value << frac;

}

Fixed::Fixed(const float value)
{
	std::cout << "Float constructor called" << std::endl;
	this->value = roundf(value * (1 << frac));
}


//copy constractor
Fixed::Fixed(const Fixed& fixed)
{
	std::cout << "Copy constractor called" << std::endl;
	this->value = fixed.value;
}


//copy assignation operator
Fixed & Fixed::operator=(const Fixed &fixed) 
{
	std::cout << "Copy Assignation operator called" << std::endl;
	this->value = fixed.value;
	return *this;
}


//destractor
Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
};


std::ostream & operator<<(std::ostream &os, Fixed const & fixed)
{
	os  << fixed.toFloat();
	return os;	
}

float   Fixed::toFloat(void) const
{
    return ((float)value / (1 << frac));
}

int     Fixed::toInt(void) const
{
	return (value >> frac);
}

void Fixed::setRawBits( int const raw )
{
	std::cout << "setRawBits member function called" << std::endl;
	this->value = raw;
}

int Fixed::getRawBits(void ) const
{
	// std::cout << "getRawBits member function called" << std::endl;
	return this->value;
}
