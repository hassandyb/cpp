/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hed-dyb <hed-dyb@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/11 14:20:54 by hed-dyb           #+#    #+#             */
/*   Updated: 2023/12/12 15:57:39 by hed-dyb          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
#define DOG_HPP

#include "Animal.hpp"


class Dog : public Animal
{
	
	public :
		Dog();
		Dog(const Dog & other);
		Dog & operator=(const Dog & other);
		~Dog();

		Dog(std::string type);

		void makeSound() const;
};
#endif