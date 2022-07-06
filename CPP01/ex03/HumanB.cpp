#include "HumanB.hpp"

HumanB::HumanB(std::string const& name) : _name(name), _w(NULL){};

HumanB::~HumanB(void) {}

void HumanB::attack(void) {
  if (this->_w == NULL)
    std::cout << _name << " has no weapon..." << std::endl;
  else
    std::cout << _name << " attacks with their " << this->_w->getType()
              << std::endl;
}

void HumanB::setWeapon(Weapon& w) { this->_w = &w; }
