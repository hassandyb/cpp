/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hed-dyb <hed-dyb@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/17 16:21:58 by hed-dyb           #+#    #+#             */
/*   Updated: 2023/12/17 17:56:18 by hed-dyb          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIASOURCE_HPP
#define MATERIASOURCE_HPP

#include "IMateriaSource.hpp"

class MateriaSource : public IMateriaSource
{
	private :
		AMateria *materias[4];
	public :
		MateriaSource();
		MateriaSource(const MateriaSource & other);
		MateriaSource & operator=(const MateriaSource & other);
		~MateriaSource();

		void learnMateria(AMateria *m);
		AMateria* createMateria(std::string const & type);

		// AMateria * getMateria(std::string const & type)
};

#endif