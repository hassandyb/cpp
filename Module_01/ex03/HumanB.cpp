


#include "HumanB.hpp"

HumanB::HumanB(std::string name) : name(name), weapon(NULL)
{
    
}

void HumanB::ft_setweapon_for_b(Weapon *new_weapon)
{
    this->weapon = new_weapon;
}

void HumanB::attack()
{
    if(this->weapon == NULL)
        std::cout << this->name << " is unarmed, so he must run!" << std::endl;
    else
    {
        std::cout << this->name << " attacks with their ";
        std::cout << this->weapon->getType() << std::endl;
    }
    
}

