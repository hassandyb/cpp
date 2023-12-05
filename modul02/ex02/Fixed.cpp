/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hed-dyb <hed-dyb@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/28 12:55:13 by hed-dyb           #+#    #+#             */
/*   Updated: 2023/12/05 11:09:31 by hed-dyb          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

const int Fixed::frac = 8;

//constractors
Fixed::Fixed() : value (0) 
{
	// std::cout << "Default constructor called" << std::endl;
};

Fixed::Fixed(const int value) 
{
	// std::cout << "Int constructor called" << std::endl;
	this->value = value << frac;

}

Fixed::Fixed(const float value)
{
	// std::cout << "Float constructor called" << std::endl;
	this->value = roundf(value * (1 << frac));
}


//copy constractor
Fixed::Fixed(const Fixed& fixed)
{
	// std::cout << "Copy constractor called" << std::endl;
	this->value = fixed.value;
}


//copy assignation operator
Fixed & Fixed::operator=(const Fixed &fixed) 
{
	// std::cout << "Copy Assignation operator called" << std::endl;
	this->value = fixed.value;
	return *this;
}


//destractor
Fixed::~Fixed()
{
	// std::cout << "Destructor called" << std::endl;
};


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

std::ostream & operator <<(std::ostream &os, Fixed const & fixed)// Overload operator
{
	// std::cout << " Overload operator << called" << std::endl;
	os  << fixed.toFloat();
	return os;	
}


//comparison operators --------------------------------------------

bool Fixed::operator < (const Fixed &fixed)
{
	if(this->value < fixed.value)
		return true;
	return false;
}

bool Fixed::operator > (const Fixed &fixed)
{
	if(this->value > fixed.value)
		return true;
	return false;
}

bool Fixed::operator >= (const Fixed &fixed)
{
	if(this->value >= fixed.value)
		return true;
	return false;
}

bool Fixed::operator <= (const Fixed &fixed)
{
	if(this->value <= fixed.value)
		return true;
	return false;
}

bool Fixed::operator == (const Fixed &fixed)
{
	if(this->value == fixed.value)
		return true;
	return false;
}

bool Fixed::operator != (const Fixed &fixed)
{
	if(this->value != fixed.value)
		return true;
	return false;
}


//arithmetic operators: --------------------------------------------

Fixed Fixed::operator + (const Fixed &fixed)
{
	Fixed result;
	result.value = this->value + fixed.value;
	return (result);
}

Fixed Fixed::operator - (const Fixed &fixed)
{
	Fixed result;
	result.value = this->value - fixed.value;
	return (result);
}

Fixed Fixed::operator * (const Fixed &fixed) 
{
    Fixed result;
    float floatResult = this->toFloat() * fixed.toFloat();// the values are saved as fixed point, so we transform them to float/int using toFloat().
    result.value = (floatResult * (1 << frac));
    return result;
}

Fixed Fixed::operator / (const Fixed &fixed)
{
	Fixed result;
	result.value = this->value / fixed.value;
	return result;
}


// increment/decrement operators: --------------------------------------------

// why return by value : becayse temp is saved befor incremen/decrement. | and the actual obj is incremented/decremented.

Fixed Fixed::operator ++ (int )	// i++ postfix increment
{
	// std::cout << "postfix increment   ++" << std::endl;
	Fixed tmp(*this);
	this->value++;
	return tmp;
}

Fixed Fixed::operator -- (int )	//i-- postfix decrement
{
	Fixed tmp(*this);
	this->value--;
	return tmp;
}

// we return by ref cause we did increment/decrement the actual obj the return it.
// so we have a ref fron the actual obj. that incremented/decremented.

Fixed & Fixed::operator ++ (void )	// ++i prefix increment
{
	// std::cout << "  ++  prefix increment" << std::endl;
	// std::cout << "----------    this->value: " << this->value << std::endl;
	this->value++;
	// std::cout << "----------    this->value: " << this->value << std::endl;
	return *this;
}

Fixed & Fixed::operator -- (void )	// --i prefix decrement
{
	this->value--;
	return *this;
}


// min/max functions: --------------------------------------------

Fixed & Fixed::min(Fixed & f1, Fixed & f2)
{
	// std::cout << "min function called" << std::endl;
	if(f1.value < f2.value)
		return f1;
	return f2;
}

const Fixed & Fixed::min(const Fixed & f1, const Fixed & f2)
{
	// std::cout << "const min function called" << std::endl;
	if(f1.value < f2.value)
		return f1;
	return f2;
}

Fixed & Fixed::max(Fixed & f1, Fixed & f2)
{
	// std::cout << "max function called" << std::endl;
	if(f1.value > f2.value)
		return f1;
	return f2;
}

const Fixed & Fixed::max(const Fixed & f1, const Fixed & f2)
{
	// std::cout << "const max function called" << std::endl;
	if(f1.value > f2.value)
		return f1;
	return f2;
}

