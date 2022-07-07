#include "ClapTrap.hpp"

#include <iostream>

ClapTrap::ClapTrap(std::string name)
    : _name(name), _hitPoints(10), _energyPoints(10), _attackDamage(0) {
  std::cout << "ClapTrap contructor called \U0001F916." << std::endl;
  displayStatus();
}

ClapTrap::ClapTrap(ClapTrap const& f) {
  this->_name = f._name;
  this->_hitPoints = f._hitPoints;
  this->_energyPoints = f._energyPoints;
  this->_attackDamage = f._attackDamage;
  std::cout << "ClapTrap copy contructor called \U0001F916." << std::endl;
  displayStatus();
};

ClapTrap& ClapTrap::operator=(ClapTrap const& f) {
  this->_name = f._name;
  this->_hitPoints = f._hitPoints;
  this->_energyPoints = f._energyPoints;
  this->_attackDamage = f._attackDamage;
  std::cout << "ClapTrap affectation operator= called \U0001F916." << std::endl;
  displayStatus();
  return (*this);
};

ClapTrap::~ClapTrap() {
  std::cout << "ClapTrap " << _name << " has been destroyed \U0001F92F."
            << std::endl;
};

void ClapTrap::displayStatus() {
  std::cout << std::endl << _name << "'s LIFE :" << std::endl;
  for (unsigned int i = 0; i < _hitPoints; i++) {
    std::cout << "\U0001F7E9";
  }
  std::cout << std::endl;
  std::cout << std::endl << _name << "'s ENERGY :" << std::endl;
  for (unsigned int i = 0; i < _energyPoints; i++) {
    std::cout << "\U0001F7E6";
  }
  std::cout << std::endl << std::endl;
  ;
}

void ClapTrap::attack(const std::string& target) {
  if (this->_energyPoints != 0 && this->_hitPoints != 0) {
    this->_energyPoints--;
    std::cout << "ClapTrap " << _name << " attacks " << target << ", causing "
              << this->_attackDamage << " point"
              << (this->_attackDamage <= 1 ? "" : "s")
              << " of damage ! \U0001F52B 	" << std::endl;
    displayStatus();
    ;

  } else if (this->_hitPoints == 0)
    std::cout << "ClapTrap " << _name << " is dead... \U0001F47B" << std::endl;
  else if (this->_energyPoints == 0)
    std::cout << "ClapTrap " << _name
              << " does not have enough energy to attack ! \U0001F6AB"
              << std::endl;
};

void ClapTrap::takeDamage(unsigned int amount) {
  if (this->_hitPoints < amount)
    this->_hitPoints = 0;
  else {
    this->_hitPoints -= amount;
    std::cout << "ClapTrap " << _name << " takes " << amount << amount
              << " point" << (amount <= 1 ? "" : "s") << " \U0001F635"
              << std::endl;
    displayStatus();
  }
};

void ClapTrap::beRepaired(unsigned int amount) {
  if (this->_energyPoints != 0 && this->_hitPoints != 0) {
    this->_hitPoints += amount;
    this->_energyPoints--;
    std::cout << "ClapTrap " << _name << " repairs,  getting " << amount
              << " life point" << (amount <= 1 ? "" : "s") << "back! "
              << std::endl;
    displayStatus();
  } else if (this->_hitPoints == 0)
    std::cout << "ClapTrap " << _name << " is dead... \U0001F47B" << std::endl;
  else if (this->_energyPoints == 0)
    std::cout << "ClapTrap " << _name
              << " does not have enough energy to repair ! \U0001F6AB"
              << std::endl;
};
