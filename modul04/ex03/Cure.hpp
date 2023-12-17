/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hed-dyb <hed-dyb@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/16 10:56:39 by hed-dyb           #+#    #+#             */
/*   Updated: 2023/12/17 15:09:36 by hed-dyb          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURE_HPP
#define CURE_HPP

#include "AMateria.hpp"

class Cure : public AMateria
{
	public :
		Cure();
		Cure(const Cure & other);
		Cure & operator=(const Cure & other);
		~Cure();

	virtual AMateria * clone() const;
	virtual void	use(ICharacter& target);

};
#endif