/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hed-dyb <hed-dyb@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/11 13:38:25 by hed-dyb           #+#    #+#             */
/*   Updated: 2023/12/12 20:18:49 by hed-dyb          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Cat.hpp"


int main() 
{

	
	const Animal* meta = new Animal();
	const Animal* j = new Dog();
	const Animal* i = new Cat();

	std::cout << std::endl;

	std::cout << j->getType() << " " << std::endl; 
	std::cout << i->getType() << " " << std::endl; 

	std::cout << std::endl;

	
	i->makeSound(); //will output the cat sound! j->makeSound();
	j->makeSound();
	meta->makeSound(); 

	std::cout << std::endl;
	
	delete meta;
	delete j;
	delete i;
	return 0; 
}

