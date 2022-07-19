
#include "Zombie.hpp"

Zombie::Zombie() : name("No name"){};

Zombie::Zombie(std::string name) : name(name) {
  std::cout << "Creating zombie " << this->name << "." << std::endl;
}

Zombie::~Zombie(void) {
  std::cout << this->name << " has been destroyed." << std::endl;
}

void Zombie::announce(void) {
  std::cout << this->name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}
