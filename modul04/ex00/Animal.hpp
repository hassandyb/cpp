/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hed-dyb <hed-dyb@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/11 13:38:17 by hed-dyb           #+#    #+#             */
/*   Updated: 2023/12/18 19:26:47 by hed-dyb          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <iostream>
#include <string>


class Animal
{
	protected:
		std::string type;
	public:
		Animal();
		Animal(const Animal & other);
		Animal & operator=(const Animal & other);
		virtual ~Animal();

		Animal(const std::string & type);

		std::string getType() const;
		void setType(std::string type) ;

		virtual void makeSound() const;

};
#endif




