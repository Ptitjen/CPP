#include "Zombie.hpp"

Zombie* newZombie (std::string name)
{
    Zombie* z;
    z->name = name;
    return (z);
}