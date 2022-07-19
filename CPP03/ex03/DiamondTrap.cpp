#include "DiamondTrap.hpp"

#include <string>
#include "ScavTrap.hpp"

DiamondTrap::DiamondTrap()
    : ClapTrap("noname_clap_name"), ScavTrap("noname"), FragTrap("noname") {
  std::cout << "DiamondTrap default contructor called \U0001F4A0." << std::endl;
  DiamondTrap::_name = "noname";
  DiamondTrap::_attackDamage = FragTrap::getDefaultAttackDamage();
  DiamondTrap::_energyPoints = ScavTrap::getDefaultEnergyPoints();
  DiamondTrap::_hitPoints = FragTrap::getDefaultHitPoints();
  displayStatus();
}

DiamondTrap::DiamondTrap(std::string name)
    : ClapTrap(name), ScavTrap(name), FragTrap(name) {
  std::cout << "DiamondTrap contructor called \U0001F4A0." << std::endl;
  ClapTrap::_name += "_clap_name";
  DiamondTrap::_name = name;
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
  std::cout << "WHO AM I ???" << std::endl;
  std::cout << "Am I" << std::endl
            << "DiamondTrap " << DiamondTrap::_name << "?" << std::endl
            << "or Am I" << std::endl
            << "ClapTrap " << ClapTrap::_name << "???" << std::endl;
}