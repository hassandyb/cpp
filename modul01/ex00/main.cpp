/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hed-dyb <hed-dyb@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/22 09:58:11 by hed-dyb           #+#    #+#             */
/*   Updated: 2023/11/30 21:07:20 by hed-dyb          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"





int main ()
{
    // Example 1 : creating a zombie on stack

    std::string name;
    std::cout << "Creating a zombie on stack, Enter it s name : ";
    if(!std::getline(std::cin, name))
        return 0;
    randomChump(name);
    

    // Example 2 : creating a zombie on the heap
    std::cout << "Creating a zombie on heap, Enter it s name : ";
    if(!std::getline(std::cin, name))
        return 0;
    Zombie *h_zombie = newZombie(name);
    h_zombie->announce();
    delete h_zombie;

}