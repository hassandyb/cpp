/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hed-dyb <hed-dyb@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/11 13:38:25 by hed-dyb           #+#    #+#             */
/*   Updated: 2023/12/19 15:38:38 by hed-dyb          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"


void ft_leaks()
{
	system("leaks animal");
}


// deep/shallow ----------------------------------------------------

// int main ()
// {
// 		Dog basic;
// 	{
// 	Dog tmp = basic;
// 	}
// }

// first test : Handling leaks ----------------------------------------------------

// int main() 
// {
// 	atexit(ft_leaks);
// 	const Animal* j;
// 	const Animal* i;
// 	j = new Dog();

// 	i = new Cat();

// 	delete j;
// 	delete i;

// 	return 0; 
// }

// second test ----------------------------------------------------

int main ()
{
	// atexit(ft_leaks);
	Animal *Animals[10];

	for (int i = 0; i < 5; i++)
		Animals[i] = new Dog();

	for (int i = 5; i < 10; i++)
		Animals[i] = new Cat();
	
			

	// calling makesould function :
	for (int i = 0; i < 10; i++)
	{
		Animals[i]->makeSound();
	}

	// deleting the pointer i alocated periviously

	for(int i = 0; i < 10; i++)
	{
		delete Animals[i];
	}
	
}

