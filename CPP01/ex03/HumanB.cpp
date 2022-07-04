#include "HumanB.hpp"

HumanB::HumanB(std::string name) 
{    
    _name = name;
    return;
}

HumanB::~HumanB(void)
{
    delete(_w);
    return;
}

void    HumanB::attack(void)
{
    std::cout << _name << " attacks with their " << _w->getType() << std::endl;
    return;
}

void    HumanB::setWeapon(Weapon w)
{
    _w = new Weapon(w);
    return;
}

