/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hed-dyb <hed-dyb@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/16 10:56:05 by hed-dyb           #+#    #+#             */
/*   Updated: 2023/12/17 15:09:40 by hed-dyb          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_HPP
#define ICE_HPP

#include "AMateria.hpp"
class Ice : public AMateria
{
	public :
		Ice();
		Ice(const Ice & other);
		Ice & operator=(const Ice & other);
		~Ice();

		virtual AMateria * clone() const;
		virtual void use(ICharacter& target);
};

#endif