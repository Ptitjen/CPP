#include "Zombie.hpp"

void randomChump (std::string name)
{
    std::cout << "Creating " << name << " with randomChump." << std::endl;
    Zombie Z = Zombie(name);
    Z.announce();
}