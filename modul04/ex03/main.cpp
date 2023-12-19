/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hed-dyb <hed-dyb@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/15 19:50:04 by hed-dyb           #+#    #+#             */
/*   Updated: 2023/12/19 18:23:10 by hed-dyb          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"
#include "Ice.hpp"
#include "Character.hpp"
#include "MateriaSource.hpp"


void ft_leaks()
{
	system("leaks game");
}

// 1 the main test 

// int main() 
// {
// 	atexit(ft_leaks);
// 	IMateriaSource* src = new MateriaSource(); 
	
// 	src->learnMateria(new Ice()); 
// 	src->learnMateria(new Cure());

// 	ICharacter* me = new Character("me");

// 	AMateria* tmp;
// 	tmp = src->createMateria("ice"); 
// 	me->equip(tmp);
// 	tmp = src->createMateria("cure"); 
// 	me->equip(tmp);

// 	ICharacter* bob = new Character("bob"); 
// 	me->use(0, *bob);

// 	me->use(1, *bob);

// 	delete bob; 
// 	delete me; 
// 	delete src;
// 	return 0; 

// }

// 2 some leak tests - maretiasource

// int main ()
// {
// 	atexit(ft_leaks);
// 	MateriaSource src1 = MateriaSource(); 
	
// 	src1.learnMateria(new Ice()); 
// 	src1.learnMateria(new Cure());

// 	MateriaSource src2 = MateriaSource(); 
	
// 	src2.learnMateria(new Ice()); 


// 	src2 = src1;

// 	// remove delete in Materiasource copy constructor 


// }

// 3 leak test - character

// int main ()
// {
// 	atexit(ft_leaks);
// 	IMateriaSource* src = new MateriaSource(); 
	
// 	src->learnMateria(new Ice()); 
// 	src->learnMateria(new Cure());

// 	Character me("me");

// 	AMateria* tmp;
// 	tmp = src->createMateria("ice"); 
// 	me.equip(tmp);
// 	tmp = src->createMateria("cure"); 
// 	me.equip(tmp);

// 	// equiping bob with cure
// 	Character bob("bob"); 
// 	tmp = src->createMateria("cure"); 
// 	bob.equip(tmp);



// 	bob = me;

// 	// remove delete in the copy assignment operator of character
// 	// and see what s gonna happen
	
// 	delete src;
// 	return 0; 
// }


// 4 we cant create more tah 4 materias and 4 inventies


int main ()
{
	{
		// IMateriaSource* src = new MateriaSource(); 
	


		// // more than 4 is protcted

		// src->learnMateria(new Ice()); 
		// src->learnMateria(new Cure());
		// src->learnMateria(new Ice()); 
		// src->learnMateria(new Cure());
		// src->learnMateria(new Cure());

		// // NULL is protected
		// src->learnMateria(NULL);

		// delete src;
	}
	{
		IMateriaSource* src = new MateriaSource(); 
	


		src->learnMateria(new Ice()); 

		ICharacter* me = new Character("me");

		// NULL is protected
		me->equip(NULL);

		//more than 4 is protcted
		AMateria *tmp;
		tmp = src->createMateria("ice");
		me->equip(tmp);
		tmp = src->createMateria("ice");
		me->equip(tmp);
		tmp = src->createMateria("ice");
		me->equip(tmp);
		tmp = src->createMateria("ice");
		me->equip(tmp);
		tmp = src->createMateria("ice");
		me->equip(tmp);

	}
		
}





