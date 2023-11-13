
#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon &weapon) {
    this->name = name;
    this->weapon = &weapon;
}

void HumanA::attack() 
{
    std::cout << this->name << " attacks with their ";
    std::cout << this->weapon->getType() << std::endl;
}