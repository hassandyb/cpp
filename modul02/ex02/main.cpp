/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hed-dyb <hed-dyb@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/28 12:54:46 by hed-dyb           #+#    #+#             */
/*   Updated: 2023/12/05 14:43:15 by hed-dyb          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"



// const ojbect meaning  - case (b):

//  *cannot be modify obj after its initialization.
// it can call only const member function (functions ends with const keyword it it s declaration). 
// it can call only const member variables.

int main( void ) 
{
	Fixed a; 
	Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );// const ==> 



	// << calls tofloat so we should expect float values

	std::cout << a << std::endl; // inside a value = 0 , and << does 0/156 = 0;
	std::cout << ++a << std::endl;// inside a value = 1 , but << opertaor divide 1 by 256 and print it. 
	std::cout << a << std::endl;// value = 1, << does again 1/256 = 0.00390625;
	std::cout << a++ << std::endl;
	std::cout << a << std::endl;// in a value = 2 , but <<  divide 2/ 256.
	std::cout << b << std::endl;


	std::cout << Fixed::max( a, b ) << std::endl;


return 0;
}