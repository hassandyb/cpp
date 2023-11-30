/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hed-dyb <hed-dyb@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/22 12:50:25 by hed-dyb           #+#    #+#             */
/*   Updated: 2023/11/30 13:59:09 by hed-dyb          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Replace.hpp"




int main (int argc, char **argv)
{
    if(argc != 4)
        return (std::cout << "Error, check args." << std::endl, 0);


    std::string filename = argv[1];
    std::string outputfile;
    outputfile = filename + ".replace";
    std::string s1 = argv[2];
    std::string s2 = argv[3];


    std::ifstream ifobject(filename);
    std::ofstream ofobject(outputfile);

    


    if(ifobject.is_open() == false || ofobject.is_open() == false)
    {
        std::cout << "Error, enable to open a file." << std::endl;
        return 1;
    }
    ft_replace(ifobject, ofobject, s1, s2);
    

   
}
