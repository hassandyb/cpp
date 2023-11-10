
#ifndef HUMANB_HPP
#define HUMANB_HPP


#include "Weapon.hpp"


class HumanB
{
    private:
        std::string name;
        Weapon *weapon;
    public:
        HumanB(std::string name);
        void ft_setweapon_for_b(Weapon *new_weapon);
        
        void attack();

};

#endif