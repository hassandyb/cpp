/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hed-dyb <hed-dyb@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/22 17:42:21 by hed-dyb           #+#    #+#             */
/*   Updated: 2023/11/23 12:26:49 by hed-dyb          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

Harl::Harl() {};
Harl::~Harl() {};



void Harl::debug( void )
{
	std::cout << "DEBUG: I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do!" << std::endl;
}
void Harl::info( void )
{
	std::cout <<  "INFO: I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!" << std::endl;
}
void Harl::warning( void )
{
	std::cout << "WARNING: I think I deserve to have some extra bacon for free. I’ve been coming forears whereas you started working here since last month." << std::endl;
}
void Harl::error( void )
{
	std::cout << "ERROR: This is unacceptable! I want to speak to the manager now." << std::endl;
}
void Harl::complaining(std::string level)
{
	std::string levels[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	func_ptr deb = &Harl::debug;
	func_ptr inf = &Harl::info;
	func_ptr war = &Harl::warning;
	func_ptr err = &Harl::error;
	func_ptr ptrs[4] = { deb, inf, war, err};

	for(int i = 0; i < 4; i++)
	{
		if(level == levels[i])
		{
			(this->*ptrs[i])();
			return;
		}
	}
	

}

