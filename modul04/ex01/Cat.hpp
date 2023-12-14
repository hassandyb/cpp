/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hed-dyb <hed-dyb@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/12 13:30:11 by hed-dyb           #+#    #+#             */
/*   Updated: 2023/12/14 20:12:58 by hed-dyb          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
#define CAT_HPP

#include "Animal.hpp"
#include "Brain.hpp"
class Cat : public Animal
{
	private :
		Brain *catbrain;
	public :
		Cat();
		Cat(const Cat & other);
		Cat & operator=(const Cat & other);
		~Cat();

		Cat(const std::string & type);

		void makeSound() const;

};



#endif



