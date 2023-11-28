/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hed-dyb <hed-dyb@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/28 12:55:10 by hed-dyb           #+#    #+#             */
/*   Updated: 2023/11/28 18:42:40 by hed-dyb          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>


// const --------------------------------------------------
// cont1 int ftmember_function(const2 int value) const3

// const 1 : 
// const 2 : Donst modify the paramter value exactly.
// const 3 : Dont modify the object's data members.

// const int x ==> once it is initialized, value cannot be modified. 

//static --------------------------------------------------

//Static Member Variables:

// - Shared Across Instances.
// - Initialization Outside the Class.
// - Access without Object Instance .
// -  exist for the entire duration of the program.

//Static Member Functions:

// - Access to Only Static Members(vars/funcs)
// - No Access to Non-Static Members.
// - No this Pointer.
// - Access without Object Instance:
// - exist for the entire duration of the program.

class Fixed 
{
	private:
		int					value;
		static const int	frac;

	public:

		Fixed();
		Fixed(const int value); // const means  the function does not change the paramter value.
		Fixed(const float value);
		Fixed(const Fixed& fixed);
		Fixed& operator=(const Fixed &fixed);
		~Fixed();

		//------------------------------------------------------------------
		int getRawBits(void ) const;
		void setRawBits( int const raw );
		float toFloat(void) const;
		int toInt(void) const;

		//comparison operators --------------------------------------------
		bool operator < (const Fixed &fixed);
		bool operator > (const Fixed &fixed);
		bool operator >= (const Fixed &fixed);
		bool operator <= (const Fixed &fixed);
		bool operator != (const Fixed &fixed);
		bool operator == (const Fixed &fixed);

		//arithmetic operators: --------------------------------------------
		Fixed operator + (const Fixed &fixed);
		Fixed operator - (const Fixed &fixed);
		Fixed operator * (const Fixed &fixed);
		Fixed operator / (const Fixed &fixed);

		// increment/decrement operators: --------------------------------------------
		Fixed operator ++ (int );
		Fixed operator -- (int );
		Fixed & operator ++ (void );
		Fixed & operator -- (void );
		

		// min/max functions: --------------------------------------------
		static Fixed & min(Fixed & f1, Fixed & f2);
		static const Fixed & min(const Fixed & f1, const Fixed & f2);

		static Fixed & max(Fixed & f1, Fixed & f2);
		static const Fixed & max(const Fixed & f1, const Fixed & f2);

		
};
std::ostream & operator<<(std::ostream & o, Fixed const & fixed);

#endif