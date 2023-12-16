/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hed-dyb <hed-dyb@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/16 10:30:49 by hed-dyb           #+#    #+#             */
/*   Updated: 2023/12/16 11:17:00 by hed-dyb          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_HPP
#define AMATERIA_HPP

#include <iostream>

class AMateria
{
	protected:
		std::string type;
	
	public:
		AMateria();
		AMateria(AMateria const & other);
		AMateria & operator=(AMateria const & other);
		~AMateria();


		AMateria(std::string const & type);
		
		
		std::string const & getType() const; 
		virtual AMateria* clone() const = 0;
};



#endif
