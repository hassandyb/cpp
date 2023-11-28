/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hed-dyb <hed-dyb@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/26 16:17:13 by hed-dyb           #+#    #+#             */
/*   Updated: 2023/11/28 11:34:34 by hed-dyb          ###   ########.fr       */
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
		Fixed(const int value);// const means  value cant be changed inside the function.
		Fixed(const float value);
		float toFloat(void) const;
		int toInt(void) const;

		//--------------------------------------
		Fixed(const Fixed& fixed);
		Fixed& operator=(const Fixed &fixed);
		~Fixed();
		int getRawBits(void ) const;
		void setRawBits( int const raw );

		//--------------------------------------------


};
std::ostream & operator<<(std::ostream & o, Fixed const & fixed);

#endif