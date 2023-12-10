/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hed-dyb <hed-dyb@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/10 13:20:26 by hed-dyb           #+#    #+#             */
/*   Updated: 2023/12/10 16:18:37 by hed-dyb          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

int main ()
{
	// case 1 : default constructor
	// FragTrap frag;
	// frag.attack("TARGET");
	// frag.guardgate();
	// frag.highFivesGuys();

	// case 2 : parameterized constructor

	FragTrap frag("FRAGROBOT");
	frag.attack("TARGET");
	frag.guardgate();
	frag.highFivesGuys();

}