#include "Weapon.hpp"

Weapon::Weapon(std::string const& type) : _type(type) {}

Weapon::~Weapon(void) {}

std::string const& Weapon::getType(void) { return (this->_type); }

void Weapon::setType(std::string const& newType) { this->_type = newType; }
