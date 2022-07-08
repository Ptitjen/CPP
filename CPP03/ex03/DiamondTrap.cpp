#include "DiamondTrap.hpp"

#include <iostream>
#include <string>

DiamondTrap::DiamondTrap(std::string name)
    : ClapTrap(name.append("_clap_name")), ScavTrap(name), FragTrap(name) {
  std::cout << "DiamondTrap contructor called \U0001F4A0." << std::endl;
  std::size_t pos = name.find("_clap_name");
  std::string str = name.substr(0, pos);
  DiamondTrap::_name = str;
  DiamondTrap::_attackDamage = FragTrap::getDefaultAttackDamage();
  DiamondTrap::_energyPoints = ScavTrap::getDefaultEnergyPoints();
  DiamondTrap::_hitPoints = FragTrap::getDefaultHitPoints();
  displayStatus();
}

DiamondTrap::DiamondTrap(DiamondTrap const& f)
    : ClapTrap(f._name), ScavTrap(f._name), FragTrap(f._name) {
  this->_name = f._name;
  this->_hitPoints = f._hitPoints;
  this->_energyPoints = f._energyPoints;
  this->_attackDamage = f._attackDamage;
  std::cout << "DiamondTrap copy contructor called \U0001F4A0." << std::endl;
  displayStatus();
};

DiamondTrap& DiamondTrap::operator=(DiamondTrap const& f) {
  this->_name = f._name;
  this->_hitPoints = f._hitPoints;
  this->_energyPoints = f._energyPoints;
  this->_attackDamage = f._attackDamage;
  std::cout << "DiamondTrap affectation operator= called \U0001F4A0."
            << std::endl;
  displayStatus();
  return (*this);
};

DiamondTrap::~DiamondTrap() {
  std::cout << "DiamondTrap destructor called \U0001F4A3." << std::endl;
};

void DiamondTrap::attack(const std::string& target) {
  ScavTrap::attack(target);
};

void DiamondTrap::whoAmI(void) {
  std::cout << "Am I DiamondTrap " << DiamondTrap::_name << " or ClapTrap "
            << ClapTrap::_name << "???" << std::endl;
}