/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hed-dyb <hed-dyb@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/09 16:51:51 by hed-dyb           #+#    #+#             */
/*   Updated: 2023/12/09 22:38:33 by hed-dyb          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

// int main ()
// {
// 	// ScavTrap scav("robot");
// 	ClapTrap *c = new ScavTrap("robot2");
// 	c->attack("someone");
// 	delete c;
//  }


//  int main ()
//  {
// 	// calling the default constructor
// 	// ScavTrap scav1;

// 	// parameterized constructor + attack function

// 	ScavTrap scav2("robot2");
// 	scav2.attack("target");

// 	// you will notice that ScavTrap attack function is called why ??

// 	// now 
// }

int main ()
{
	ScavTrap scav("robot2");
	// ClapTrap tt;
	ClapTrap &c = scav;  // reference is importatnt Using a reference to the base class

	c.attack("someone");  // This will call the overridden attack function in ScavTrap

}


