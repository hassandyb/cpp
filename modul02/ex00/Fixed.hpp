/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hed-dyb <hed-dyb@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/26 11:13:03 by hed-dyb           #+#    #+#             */
/*   Updated: 2023/11/26 15:46:47 by hed-dyb          ###   ########.fr       */
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
		// static means shares by all instances.
		// const means once initialized, cannot be changed.
	public:
		Fixed();
		Fixed(const Fixed& fixed);
		Fixed& operator=(const Fixed &fixed);
		~Fixed();

		int getRawBits(void ) const;
		// const means cannot change any member variables.

};


#endif