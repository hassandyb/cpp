/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hed-dyb <hed-dyb@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/16 14:46:08 by hed-dyb           #+#    #+#             */
/*   Updated: 2023/12/16 16:02:38 by hed-dyb          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
#define CHAEACTER_HPP

#include "ICharacter.hpp"

class Character : public ICharacter
{
	private :
	std::string name;
	AMateria *inventory[4];

	private :

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