/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hed-dyb <hed-dyb@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/10 13:20:53 by hed-dyb           #+#    #+#             */
/*   Updated: 2023/12/10 13:23:27 by hed-dyb          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

#include <iostream>
#include <string>

class ClapTrap
{
	protected:
		std::string name;
		int hit_points;
		int energy_points;
		int attack_damage;
	public :
		ClapTrap();
		ClapTrap(const ClapTrap &otehr);
		ClapTrap & operator=(const ClapTrap & other);
		virtual ~ClapTrap();


		ClapTrap(std::string name);
		virtual void attack(const std::string & target);
		void takeDamage(unsigned int amount);
		void beRepaired(unsigned int amount);

		

};

#endif

