/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hed-dyb <hed-dyb@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/11 13:38:25 by hed-dyb           #+#    #+#             */
/*   Updated: 2023/12/19 15:55:18 by hed-dyb          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"


int main ()
{
	
	const Animal* j = new Dog();
	const Animal* i = new Cat();

	std::cout << std::endl;

	std::cout << j->getType() << " " << std::endl; 
	std::cout << i->getType() << " " << std::endl; 

	std::cout << std::endl;

	
	i->makeSound(); //will output the cat sound! j->makeSound();
	j->makeSound();
	

	std::cout << std::endl;
	

	// you cant simply obj of animal
	
	// const Animal* meta = new Animal();



	delete j;
	delete i;
	return 0; 
}
