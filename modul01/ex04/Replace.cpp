/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Replace.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hed-dyb <hed-dyb@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/30 13:36:18 by hed-dyb           #+#    #+#             */
/*   Updated: 2023/11/30 13:43:08 by hed-dyb          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Replace.hpp"



void ft_replace(std::ifstream &ifobject, std::ofstream &ofobject, std::string &s1, std::string &s2)
{
    std::string line;
    int index = 0;
    while(std::getline(ifobject ,line))
    {
        int position = line.find(s1);
        index = position + s2.length();
        while(position != std::string::npos)
        {
            line.erase(position, s1.length());
            line.insert(position, s2);
            position = line.find(s1, index);
            index = position + s2.length();
        }
        ofobject << line << std::endl; 
        
    }
}

