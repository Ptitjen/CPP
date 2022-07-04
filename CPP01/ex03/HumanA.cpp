#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon& initial_w) : _w(initial_w)
{   
    _name = name;
    return;
}

HumanA::~HumanA(void)
{
   return;
}

void    HumanA::attack(void)
{
    std::cout << _name << " attacks with their " << _w.getType() << std::endl;
    return;
}
