#include "ScavTrap.hpp"

#include <iostream>

ScavTrap::ScavTrap() {
  std::cout << "ScavTrap contructor called \U0001F608." << std::endl;
  this->_name = "noname";
  this->_attackDamage = 20;
  this->_energyPoints = 50;
  this->_hitPoints = 100;
  displayStatus();
}

ScavTrap::ScavTrap(std::string name) : ClapTrap(name.append("_clap_name")) {
  std::cout << "ScavTrap contructor called \U0001F608." << std::endl;
  this->_name = name;
  this->_attackDamage = 20;
  this->_energyPoints = 50;
  this->_hitPoints = 100;
}

ScavTrap::ScavTrap(ScavTrap const &f) : ClapTrap(f._name) {
  this->_name = f._name;
  this->_hitPoints = f._hitPoints;
  this->_energyPoints = f._energyPoints;
  this->_attackDamage = f._attackDamage;
  std::cout << "ScavTrap copy contructor called \U0001F608." << std::endl;
};

ScavTrap &ScavTrap::operator=(ScavTrap const &f) {
  this->_name = f._name;
  this->_hitPoints = f._hitPoints;
  this->_energyPoints = f._energyPoints;
  this->_attackDamage = f._attackDamage;
  std::cout << "ScavTrap affectation operator= called \U0001F608." << std::endl;

  return (*this);
};

ScavTrap::~ScavTrap() {
  std::cout << "ScavTrap destructor called \U0001F525." << std::endl;
};

void ScavTrap::guardGate() {
  std::cout << this->_name << " entered in GateKeeper Mode \U0001F6E1."
            << std::endl;
}

void ScavTrap::attack(const std::string &target) {
  if (this->_energyPoints != 0 && this->_hitPoints != 0) {
    this->_energyPoints--;
    std::cout << _name << " brutally attacks " << target
              << ", causing a massive bleeding and " << this->_attackDamage
              << " points of damage ! \U00002694 	" << std::endl;
    displayStatus();
    ;

  } else if (this->_hitPoints == 0)
    std::cout << _name << " is dead... \U0001F47B" << std::endl;
  else if (this->_energyPoints == 0)
    std::cout << _name << " does not have enough energy to attack ! \U0001F6AB"
              << std::endl;
};

unsigned int ScavTrap::getDefaultEnergyPoints(void) {
  return (defaultEnergyPoints);
};
unsigned int ScavTrap::getDefaultHitPoints(void) { return (defaultHitPoints); };
unsigned int ScavTrap::getDefaultAttackDamage(void) {
  return (defaultAttackDamage);
};