/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hed-dyb <hed-dyb@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/22 18:57:28 by hed-dyb           #+#    #+#             */
/*   Updated: 2023/11/30 14:23:04 by hed-dyb          ###   ########.fr       */
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
		if(!std::getline(std::cin, level))
			return 0;
		if(level == "")
		{
			continue;
		}
			
		harl.complain(level);
	}
}


