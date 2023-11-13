


#include "HumanB.hpp"

HumanB::HumanB(std::string name)
{

    this->name = name;
    this->weapon = NULL;
}

void HumanB::setWeapon(Weapon &weapon_ref)
{
    this->weapon = &weapon_ref;
}

void HumanB::attack()
{
    if(this->weapon == NULL)
        std::cout << this->name << " is unarmed." << std::endl;
    else
        std::cout << this->name << " attacks with their " << this->weapon->getType() << std::endl;
}


