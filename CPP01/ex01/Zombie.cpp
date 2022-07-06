#include "Zombie.hpp"

Zombie::Zombie(void) {}

Zombie::~Zombie(void) {
  std::cout << this->_name << " self-destructed itself..." << std::endl;
}

void Zombie::name(std::string(name)) { this->_name = name; }

void Zombie::announce(void) {
  std::cout << this->_name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}
