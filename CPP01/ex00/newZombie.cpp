#include "Zombie.hpp"

Zombie* newZombie (std::string name)
{
    std::cout << "Creating " << name << " with newZombie." << std::endl;   
    return (new Zombie(name));
}