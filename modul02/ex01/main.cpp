/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hed-dyb <hed-dyb@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/26 15:49:37 by hed-dyb           #+#    #+#             */
/*   Updated: 2023/12/05 14:33:22 by hed-dyb          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Fixed.hpp"


int main( void ) 
{
	Fixed a;
	Fixed const b( 10 );// saved as 10 * 2^8 = 2560
	Fixed const c( 42.42f );// saved as 42.42 * 2^8 = 10,859 and saved as int 
	Fixed const d( b );// saved as 2560 
	a = Fixed( 1234.4321f );// saved as 1234.4321 * 2^8 = 316014 and saved as int


	// objcs ==> << we emplimented will be called.
	// << calls toFloat() which returns  a float after 
	std::cout << "a is " << a << std::endl; // 316014 / 2^8 = 1234.43
	std::cout << "b is " << b << std::endl; // 2560 / 2^8 = 10
	std::cout << "c is " << c << std::endl;// 10859 / 2^8 = 42.4219
	std::cout << "d is " << d << std::endl;// 2560 / 2^8 = 10


	// << we emplimented wont be called cause calling toInt() return an int.
	// int     Fixed::toInt(void)

	std::cout << "a is " << a.toInt() << " as integer" << std::endl; //(316014 >> 8 become 1234).
	std::cout << "b is " << b.toInt() << " as integer" << std::endl; // 2560 >> 8 = 10
	std::cout << "c is " << c.toInt() << " as integer" << std::endl;//	10859 >> 8 = 42
	std::cout << "d is " << d.toInt() << " as integer" << std::endl;// 1560 >> 8 = 10

	return 0;
}


