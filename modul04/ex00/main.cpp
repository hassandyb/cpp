/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hed-dyb <hed-dyb@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/11 13:38:25 by hed-dyb           #+#    #+#             */
/*   Updated: 2023/12/19 14:40:31 by hed-dyb          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"

// Virtual make the priority to the child class first

int main() 
{
	// wrong animal
	{
		WrongAnimal *meta = new WrongAnimal();
		WrongAnimal *obj = new WrongCat();
		meta->makeSound();
		obj->makeSound();
		delete obj;
		delete meta;
	}
	// look at the order
	{
		// Animal *obj = new Dog();
		// delete obj;
	}
	// without virtual keyword
	{
		// const WrongAnimal* meta = new WrongAnimal();
		// const WrongAnimal*j = new WrongCat();

		// std::cout << meta->getType() << std::endl;
		// std::cout << j->getType() << std::endl;

		// meta->makeSound();
		// j->makeSound();
		
		// delete meta;
		// delete j;
	}
	{
		// const Animal* meta = new Animal(); 
		// const Animal* j = new Dog();
		// const Animal* i = new Cat();

		// std::cout << j->getType() << " " << std::endl; 
		// std::cout << i->getType() << " " << std::endl; 

		// j->makeSound(); 
		// i->makeSound();
		// meta->makeSound(); 
		


		// delete meta;
		// delete j;
		// delete i;

		// return 0; 
	}
}