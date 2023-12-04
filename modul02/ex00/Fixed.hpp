/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hed-dyb <hed-dyb@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/26 11:13:03 by hed-dyb           #+#    #+#             */
/*   Updated: 2023/12/04 17:41:37 by hed-dyb          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>


	// The member access operator (.) 

	// is used to access members of an object.

	// The scope resolution operator (::) 

	// is used to access members of a namespace, a class, 
	// or a structure.static members of a class.

// what do we benefet form declaring the parameters as constfor the canonical form functions?

// we ganarty they wont change the state of the object.
// allowing the function to accept const objects


class Fixed 
{
	private:
		int					value;
		static const int	frac;
		// static means shares by all instances.
		// const means once initialized, cannot be changed.
	public:
		Fixed();
		Fixed(const Fixed& fixed);
		Fixed& operator=(const Fixed &fixed);
		~Fixed();

		int getRawBits(void ) const;// const means it does not change the state of the object.
		void setRawBits( int const raw );

};


#endif