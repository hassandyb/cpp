/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hed-dyb <hed-dyb@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/12 18:41:54 by hed-dyb           #+#    #+#             */
/*   Updated: 2023/12/14 17:38:53 by hed-dyb          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_HPP
#define WRONGANIMAL_HPP


#include <iostream>

class WrongAnimal
{
	protected :
		std::string type;

	public :
		WrongAnimal();
		WrongAnimal(const WrongAnimal & other);
		WrongAnimal & operator=(const WrongAnimal & other);
		 ~WrongAnimal();

		WrongAnimal(const std::string & type);

		std::string getType() const;
		void setType(std::string type);

		 void makeSound() const;


};
#endif