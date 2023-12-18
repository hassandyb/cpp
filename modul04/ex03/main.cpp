/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hed-dyb <hed-dyb@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/15 19:50:04 by hed-dyb           #+#    #+#             */
/*   Updated: 2023/12/18 18:26:07 by hed-dyb          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"
#include "Ice.hpp"
#include "Character.hpp"
#include "MateriaSource.hpp"

// void ft_leaks()
// {
// 	system("leaks game");
// }

// int main() 
// {
// 	atexit(ft_leaks);
// 	IMateriaSource* src = new MateriaSource(); 
	

// 	// creating the materias in src / we can define 4 elements , in our case we made 2 (ice and cure).
// 	src->learnMateria(new Ice()); 
// 	src->learnMateria(new Cure());

// 	//creating the character me
// 	ICharacter* me = new Character("me");
	
// 	AMateria* tmp;

// 	// now lets equipe the me character with ice and cure materias from src(the stock).
// 	tmp = src->createMateria("ice"); 
// 	me->equip(tmp);
// 	delete (tmp);
// 	tmp = src->createMateria("cure"); 
// 	me->equip(tmp);
// 	delete (tmp);
	
// 	me->unequip(0);
// 	me->unequip(1);

// 	tmp = src->createMateria("ice"); 
// 	me->equip(tmp);
// 	tmp = src->createMateria("cure"); 
// 	me->equip(tmp);


	
// 	// lets crrate a bob character
// 	ICharacter* bob = new Character("bob"); 

// 	// now lets use the materias on bob
// 	me->use(0, *bob);
// 	me->use(1, *bob);

// 	delete bob; 
// 	delete me; 
// 	delete src;
// 	return 0; 
// }


int main() 
{
	IMateriaSource* src = new MateriaSource(); 

	src->learnMateria(new Ice()); 
	src->learnMateria(new Cure());

	ICharacter* me = new Character("me");
	AMateria* tmp;

	tmp = src->createMateria("ice"); 
	me->equip(tmp);
	tmp = src->createMateria("cure"); 
	me->equip(tmp);

	ICharacter* bob = new Character("bob"); 

	me->use(0, *bob);
	me->use(1, *bob);
	
	delete bob; 
	delete me; 
	delete src;
	return 0; 
}