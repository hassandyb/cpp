


#include "Weapon.hpp"
#include "HumanA.hpp"
#include "HumanB.hpp"


// calss HumanB
// {
//     private:
//         std::string name;
//         Weapon weapon;
//     public:
//         HumanB(std::string name);
//         void ft_setweapon_for_b(Weapon weapon);
//         void attack();
// }

// calss HumanA
// {
//     private:
//         std::string name;
//         Weapon weapon;
//     public:
//         HumanA(std::string name, Weapon weapon);
//         void attack();

// }


// class Weapon
// {
//     private:
//         std::string type;
//     public:
//         Weapon(std::string type);
//         ~Weapon();
//         const std::string getType(void);
//         void setType(std::string newtype);
// };

int main ()
{
    // creating the weapon:

    Weapon Gun("gun");


    // creating a HumanA humanb objects 
    // 
    HumanA A("john", Gun);
    HumanB B("mike");

    // humanA attacks
    A.attack();

    // humanB attacks befor and after taking the weapon
    B.attack();
    B.ft_setweapon_for_b(&Gun);
    B.attack();

    

    // makeing humanB  not having a Weapon
    B.ft_setweapon_for_b(NULL);
    B.attack();


    // changing HumanB weapon

    Weapon Sord("sord");
    B.ft_setweapon_for_b(&Sord);
    B.attack();
}

