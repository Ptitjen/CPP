#include "Weapon.hpp"

Weapon::Weapon(std::string type) : _type(type)
{    
    return;
}

Weapon::~Weapon(void)
{
    return;
}

const std::string&   Weapon::getType(void) 
{
    const std::string& typeREF = _type;
    return (typeREF);
}

void    Weapon::setType(std::string newType)
{
    _type = newType;
    return;
}
