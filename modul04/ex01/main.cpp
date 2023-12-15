/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hed-dyb <hed-dyb@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/11 13:38:25 by hed-dyb           #+#    #+#             */
/*   Updated: 2023/12/15 15:26:12 by hed-dyb          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"


void ft_leaks()
{
	system("leaks animal");
}

// first test ----------------------------------------------------

int main() 
{
	ft_leaks();
	const Animal* j;
	const Animal* i;

	std::cout << std::endl << "---------------------" << std::endl << std::endl;

	j = new Dog();
	
	std::cout << std::endl << "---------------------" << std::endl << std::endl;

	i = new Cat();

	std::cout << std::endl << "---------------------" << std::endl << std::endl;

	delete j;//should not create a leak delete i;
	
	std::cout << std::endl << "---------------------" << std::endl << std::endl;
	
	delete i;

	return 0; 
}

// second test ----------------------------------------------------

// int main ()
// {
// 	ft_leaks();
// 	 Animal *Animals[10];

// 	for (int i = 0; i < 10; i++)
// 	{
// 		if(i % 2 == 0)
// 			Animals[i] = new Dog();
// 		else
// 			Animals[i] = new Cat();
// 	}
// 	for (int i = 0; i < 10; i++)
// 	{
// 		Animals[i]->makeSound();
// 	}
// 	// for(int i = 0; i < 10; i++)
// 	// {
// 	// 	delete Animals[i];
// 	// }
	
// }

