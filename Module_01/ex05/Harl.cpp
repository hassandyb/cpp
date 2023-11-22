/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hed-dyb <hed-dyb@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/22 17:42:21 by hed-dyb           #+#    #+#             */
/*   Updated: 2023/11/22 22:53:42 by hed-dyb          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

Harl::Harl() {};
Harl::~Harl() {};



void Harl::debug( void )
{
	std::cout << "DEBUG: Says something" << std::endl;
}
void Harl::info( void )
{
	std::cout << "INFO: Says something" << std::endl;
}
void Harl::warning( void )
{
	std::cout << "WARNING: Says something" << std::endl;
}
void Harl::error( void )
{
	std::cout << "ERROR: Says something" << std::endl;
}
void Harl::complaining(std::string level)
{
	std::string levels[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	func_ptr ptrs[4] = { &Harl::debug, &Harl::info, &Harl::warning, &Harl::error};

	for(int i = 0; i < 4; i++)
	{
		if(level == levels[i])
		{
			(this->*ptrs[i])();
			return;
		}
	}
	

}

