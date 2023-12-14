/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hed-dyb <hed-dyb@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/11 13:38:25 by hed-dyb           #+#    #+#             */
/*   Updated: 2023/12/14 17:39:37 by hed-dyb          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"

int main() 
{
	{
		// const Animal* meta = new Animal();
		// const Animal* j = new Dog();
		// const Animal* i = new Cat();

		// std::cout << std::endl;

		// std::cout << j->getType() << " " << std::endl; 
		// std::cout << i->getType() << " " << std::endl; 

		// std::cout << std::endl;

		
		// i->makeSound(); //will output the cat sound! j->makeSound();
		// j->makeSound();
		// meta->makeSound(); 

		// std::cout << std::endl;
		
		// delete meta;
		// delete j;
		// delete i;
		// return 0; 
	}
	{
		const WrongAnimal* meta = new WrongAnimal();
		const WrongAnimal* i = new WrongCat();

		std::cout << i->getType() << " " << std::endl;

		i->makeSound();
		meta->makeSound();

		delete meta;
		delete i;
		return 0;
	}
}

