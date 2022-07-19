#include "Zombie.hpp"

Zombie::Zombie(void) : name("No name") {}

Zombie::Zombie(std::string name) : name(name) {
  std::cout << "Creating zombie " << this->name << "." << std::endl;
}

Zombie::~Zombie(void) {
  std::cout << this->name << " self-destructed itself..." << std::endl;
}

void Zombie::setName(std::string(name)) { this->name = name; }

void Zombie::announce(void) {
  std::cout << this->name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}
