#include "HumanA.hpp"

HumanA::HumanA(std::string const& name, Weapon& initial_w) : _w(initial_w) {
  _name = name;
}

HumanA::~HumanA(void) {}

void HumanA::attack(void) {
  std::cout << _name << " attacks with their " << _w.getType() << std::endl;
}
