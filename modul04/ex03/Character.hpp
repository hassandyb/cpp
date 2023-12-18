/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hed-dyb <hed-dyb@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/16 14:46:08 by hed-dyb           #+#    #+#             */
/*   Updated: 2023/12/18 16:36:38 by hed-dyb          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
#define CHARACTER_HPP

#include "AMateria.hpp"
#include "ICharacter.hpp"
#include <iostream>

class Character : public ICharacter
{
	private :
	std::string name;
	AMateria *inventory[4];

	public :

		Character(std::string const & name);
		Character(const Character & other);
		Character & operator=(const Character & other);
		~Character();


		std::string const & getName() const;
		void equip(AMateria * m);
		void unequip(int idx);
		void use(int idx, ICharacter & target);

};

#endif