/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hed-dyb <hed-dyb@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/26 15:50:23 by hed-dyb           #+#    #+#             */
/*   Updated: 2023/12/05 13:06:27 by hed-dyb          ###   ########.fr       */
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
	std::cout << "Copy constructor called" << std::endl;
	*this = fixed;// we could do this->value = fixed->value, but we need to call copy assignemt operator todesplay in fifth line.
}


//copy assignation operator
Fixed & Fixed::operator=(const Fixed &fixed) 
{
	std::cout << "Copy assignation operator called" << std::endl;
	this->value = fixed.getRawBits();
	return *this;
}


//destractor
Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
};

float   Fixed::toFloat(void) const
{
    return ((float)value / (1 << frac));// value is int in the calss so we need to cast it to float
}

int     Fixed::toInt(void) const
{
	return (value >> frac);
}

void Fixed::setRawBits( int const raw )
{
	// std::cout << "setRawBits member function called" << std::endl;
	this->value = raw;
}

int Fixed::getRawBits(void ) const
{
	// std::cout << "getRawBits member function called" << std::endl;
	return this->value;
}

std::ostream & operator<<(std::ostream &os, Fixed const & fixed)
{

	os  << fixed.toFloat();
	return os;	
}
