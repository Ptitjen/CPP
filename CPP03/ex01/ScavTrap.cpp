#include "ScavTrap.hpp"

#include <iostream>

ScavTrap::ScavTrap(std::string name) : ClapTrap(name) {
  std::cout << "ScavTrap contructor called \U0001F608." << std::endl;
  this->_name = name;
  this->_attackDamage = 25;
  this->_energyPoints = 50;
  this->_hitPoints = 100;
  displayStatus();
}

ScavTrap::ScavTrap(ScavTrap const& f) : ClapTrap(f._name) {
  this->_name = f._name;
  this->_hitPoints = f._hitPoints;
  this->_energyPoints = f._energyPoints;
  this->_attackDamage = f._attackDamage;
  std::cout << "ScavTrap copy contructor called \U0001F608." << std::endl;
  displayStatus();
};

ScavTrap& ScavTrap::operator=(ScavTrap const& f) {
  this->_name = f._name;
  this->_hitPoints = f._hitPoints;
  this->_energyPoints = f._energyPoints;
  this->_attackDamage = f._attackDamage;
  std::cout << "ScavTrap affectation operator= called \U0001F608." << std::endl;
  displayStatus();
  return (*this);
};

ScavTrap::~ScavTrap() {
  std::cout << "ScavTrap " << _name << " has been destroyed \U0001F525."
            << std::endl;
};

void ScavTrap::guardGate() {
  std::cout << this->_name << " entered in GateKeeper Mode \U0001F6E1."
            << std::endl;
}

void ScavTrap::attack(const std::string& target) {
  if (this->_energyPoints != 0 && this->_hitPoints != 0) {
    this->_energyPoints--;
    std::cout << "ScavTrap " << _name << " bruttaly attacks " << target
              << ", causing a massive bleeding and " << this->_attackDamage
              << " points of damage ! \U00002694 	" << std::endl;
    displayStatus();
    ;

  } else if (this->_hitPoints == 0)
    std::cout << "ClapTrap " << _name << " is dead... \U0001F47B" << std::endl;
  else if (this->_energyPoints == 0)
    std::cout << "ClapTrap " << _name
              << " does not have enough energy to attack ! \U0001F6AB"
              << std::endl;
};