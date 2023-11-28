/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hed-dyb <hed-dyb@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/28 12:55:10 by hed-dyb           #+#    #+#             */
/*   Updated: 2023/11/28 14:58:34 by hed-dyb          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>



class Fixed 
{
	private:
		int					value;
		static const int	frac;

	public:
		Fixed();
		Fixed(const int value);// const means  the function does not change the paramter value
		Fixed(const float value);
		float toFloat(void) const;
		int toInt(void) const;

		//--------------------------------------
		Fixed(const Fixed& fixed);
		Fixed& operator=(const Fixed &fixed);
		~Fixed();
		int getRawBits(void ) const;
		void setRawBits( int const raw );

		//comparison operators --------------------------------------------
		bool Fixed::operator< (const Fixed &fixed);
		bool Fixed::operator> (const Fixed &fixed);
		bool Fixed::operator >= (const Fixed &fixed);
		bool Fixed::operator <= (const Fixed &fixed);
		bool Fixed::operator != (const Fixed &fixed);
		bool Fixed::operator == (const Fixed &fixed);

		//arithmetic operators: --------------------------------------------
		Fixed Fixed::operator + (const Fixed &fixed);
		Fixed Fixed::operator - (const Fixed &fixed);
		Fixed Fixed::operator * (const Fixed &fixed);
		Fixed Fixed::operator / (const Fixed &fixed);

		// increment/decrement operators: --------------------------------------------

		Fixed & Fixed::operator ++ (void );
		Fixed & Fixed::operator -- (void );
		Fixed Fixed::operator ++ (int );
		Fixed Fixed::operator -- (int );

};
std::ostream & operator<<(std::ostream & o, Fixed const & fixed);

#endif