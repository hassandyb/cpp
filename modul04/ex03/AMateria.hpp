/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hed-dyb <hed-dyb@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/16 10:30:49 by hed-dyb           #+#    #+#             */
/*   Updated: 2023/12/18 17:48:50 by hed-dyb          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_HPP
#define AMATERIA_HPP

#include <iostream>

class ICharacter;

class AMateria
{
	protected:
		std::string type;
	
	public:
		AMateria();
		AMateria(AMateria const & other);
		AMateria & operator=(AMateria const & other);
		virtual ~AMateria();//if you don't make it virtual, you will have a memory leak and the destructor of the child class will not be called


		AMateria(std::string const & type);
		
		
		std::string const & getType() const; 
		virtual AMateria* clone() const = 0;
		virtual void use(ICharacter & target);
};



#endif
