/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hed-dyb <hed-dyb@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/26 11:13:00 by hed-dyb           #+#    #+#             */
/*   Updated: 2023/11/28 11:33:58 by hed-dyb          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

const int Fixed::frac = 8;

Fixed::Fixed() : value (0) 
{
	std::cout << "Default constructor called" << std::endl;
};

Fixed::Fixed(const Fixed &fixed)
{

	std::cout << "Copy constructor called" << std::endl;
	this->value = fixed.getRawBits();
}

Fixed & Fixed::operator=(const Fixed &fixed) 
{
	std::cout << "Copy Assignation operator called" << std::endl;
	this->value = fixed.value;
	return *this;
}

int Fixed::getRawBits(void ) const
{
	std::cout << "getRawBits member function called" << std::endl;
	return this->value;
}

void setRawBits( int const raw );
{
	std::cout << "setRawBits member function called" << std::endl;
	this->value = raw;
}
Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
};


