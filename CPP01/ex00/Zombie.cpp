
#include "Zombie.hpp"

Zombie::Zombie(std::string name) : _name(name)
{
    return;
}

Zombie::~Zombie(void)
{
    std::cout << this->_name << " self-destructed itself..." << std::endl;
    return;
}

void    Zombie::announce(void)
{
    std::cout << this->_name << ": BraiiiiiiinnnzzzZ..." << std::endl;
    return;
}
