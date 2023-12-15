/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hed-dyb <hed-dyb@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/11 14:20:54 by hed-dyb           #+#    #+#             */
/*   Updated: 2023/12/14 20:12:50 by hed-dyb          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
#define DOG_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Dog : public Animal
{
	private :
		Brain *dogbrain;
	public :
		Dog();
		Dog(const Dog & other);
		Dog & operator=(const Dog & other);
		~Dog();

		Dog(const std::string & type);

		void makeSound() const;
};
#endif