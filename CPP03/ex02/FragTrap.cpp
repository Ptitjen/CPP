#include "FragTrap.hpp"

#include <iostream>

FragTrap::FragTrap(std::string name) : ClapTrap(name) {
  std::cout << "FragTrap contructor called \U0001F9DF." << std::endl;
  this->_name = name;
  this->_attackDamage = 30;
  this->_energyPoints = 100;
  this->_hitPoints = 100;
  displayStatus();
}

FragTrap::FragTrap(FragTrap const& f) : ClapTrap(f._name) {
  this->_name = f._name;
  this->_hitPoints = f._hitPoints;
  this->_energyPoints = f._energyPoints;
  this->_attackDamage = f._attackDamage;
  std::cout << "FragTrap copy contructor called \U0001F9DF." << std::endl;
  displayStatus();
};

FragTrap& FragTrap::operator=(FragTrap const& f) {
  this->_name = f._name;
  this->_hitPoints = f._hitPoints;
  this->_energyPoints = f._energyPoints;
  this->_attackDamage = f._attackDamage;
  std::cout << "FragTrap affectation operator= called \U0001F9DF." << std::endl;
  displayStatus();
  return (*this);
};

FragTrap::~FragTrap() {
  std::cout << "FragTrap " << _name << " has been destroyed \U0001F4A5."
            << std::endl;
};

void FragTrap::highFivesGuys() {
  std::cout << this->_name << " asked for a high five ! \U0001F590 	"
            << std::endl;
}

void FragTrap::attack(const std::string& target) {
  if (this->_energyPoints != 0 && this->_hitPoints != 0) {
    this->_energyPoints--;
    std::cout << "FragTrap " << _name << " launched a storm attack on "
              << target << ", causing " << this->_attackDamage
              << " points of damage ! \U0001F32A 		" << std::endl;
    displayStatus();
    ;

  } else if (this->_hitPoints == 0)
    std::cout << "FragTrap " << _name << " is dead... \U0001F47B" << std::endl;
  else if (this->_energyPoints == 0)
    std::cout << "FragTrap " << _name
              << " does not have enough energy to attack ! \U0001F6AB"
              << std::endl;
};