/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hed-dyb <hed-dyb@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/12 17:54:53 by hed-dyb           #+#    #+#             */
/*   Updated: 2023/12/14 17:16:14 by hed-dyb          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGCAT_HPP
# define WRONGCAT_HPP

#include "WrongAnimal.hpp"
#include <iostream>

class WrongCat : public WrongAnimal
{
	public :
		WrongCat();
		WrongCat(const WrongCat & other);
		WrongCat & operator=(const WrongCat & other);
		~WrongCat();

		WrongCat(const std::string & type);

		void makeSound() const;
};

#endif