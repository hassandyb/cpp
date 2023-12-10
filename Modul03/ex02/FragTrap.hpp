/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hed-dyb <hed-dyb@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/10 13:26:11 by hed-dyb           #+#    #+#             */
/*   Updated: 2023/12/10 16:11:55 by hed-dyb          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAG_TRAP_HPP
# define FRAG_TRAP_HPP

#include "ClapTrap.hpp"

class FragTrap : public ClapTrap
{
	public:
		FragTrap();
		FragTrap(const FragTrap & other);
		FragTrap & operator=(const FragTrap & other);
		~FragTrap();

		FragTrap(std::string name);
		void guardgate();
		void attack(const std::string & target);

		void highFivesGuys(void);
		
		
};

#endif