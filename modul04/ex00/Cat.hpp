/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hed-dyb <hed-dyb@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/12 13:30:11 by hed-dyb           #+#    #+#             */
/*   Updated: 2023/12/12 15:57:26 by hed-dyb          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
#define CAT_HPP

#include "Animal.hpp"

class Cat : public Animal
{
	public :
		Cat();
		Cat(const Cat & other);
		Cat & operator=(const Cat & other);
		~Cat();

		Cat(std::string type);

		void makeSound() const;

};



#endif



