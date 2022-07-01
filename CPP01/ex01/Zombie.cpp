#include "Zombie.hpp"

Zombie::Zombie(void) 
{
    
    return;
}

Zombie::~Zombie(void)
{
    std::cout << this->_name << " self-destructed itself..." << std::endl;
    return;
}

void    Zombie::name(std::string(name))
{
    this->_name = name;
    return;
}

void    Zombie::announce(void)
{
    std::cout << this->_name << ": BraiiiiiiinnnzzzZ..." << std::endl;
    return;
}
