/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hed-dyb <hed-dyb@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/22 09:58:11 by hed-dyb           #+#    #+#             */
/*   Updated: 2023/11/22 11:34:56 by hed-dyb          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"





int main ()
{
    // Example 1 : creating a zombie on stack
    
    // randomChump("stack_zombie");
    

    // Example 2 : creating a zombie on the heap

    Zombie *h_zombie = newZombie("heap_zombie");
    h_zombie->announce();
    delete h_zombie;

}