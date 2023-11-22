/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hed-dyb <hed-dyb@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/22 18:57:28 by hed-dyb           #+#    #+#             */
/*   Updated: 2023/11/22 23:00:54 by hed-dyb          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"



int main ()
{
	Harl harl;
	std::string level;

	while(1)
	{
		std::cout << "Enter a level : ";
		std::getline(std::cin, level);
		if(level == "")
		{
			continue;
		}
			
		harl.complaining(level);
	}
}


