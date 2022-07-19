#include "ClapTrap.hpp"

ClapTrap::ClapTrap()
    : _name("No name"), _hitPoints(10), _energyPoints(10), _attackDamage(0) {
  std::cout << "ClapTrap contructor called \U0001F916." << std::endl;
};

ClapTrap::ClapTrap(std::string name)
    : _name(name), _hitPoints(10), _energyPoints(10), _attackDamage(0) {
  std::cout << "ClapTrap contructor called \U0001F916." << std::endl;
}

ClapTrap::ClapTrap(ClapTrap const& f) {
  this->_name = f._name;
  this->_hitPoints = f._hitPoints;
  this->_energyPoints = f._energyPoints;
  this->_attackDamage = f._attackDamage;
  std::cout << "ClapTrap copy contructor called \U0001F916." << std::endl;
};

ClapTrap& ClapTrap::operator=(ClapTrap const& f) {
  this->_name = f._name;
  this->_hitPoints = f._hitPoints;
  this->_energyPoints = f._energyPoints;
  this->_attackDamage = f._attackDamage;
  std::cout << "ClapTrap affectation operator= called \U0001F916." << std::endl;

  return (*this);
};

ClapTrap::~ClapTrap() {
  std::cout << "ClapTrap " << _name << " has been destroyed \U0001F92F."
            << std::endl;
};

void ClapTrap::displayStatus() {
  std::cout << std::endl << _name << "'s LIFE :" << std::endl;
  for (unsigned int i = 0; i < _hitPoints; i++) {
    if (i != 0 && i % 50 == 0)
      std::cout << std::endl;
    std::cout << "\033[1;32m|\033[0m";
  }
  std::cout << std::endl;
  std::cout << std::endl << _name << "'s ENERGY :" << std::endl;
  for (unsigned int i = 0; i < _energyPoints; i++) {
    if (i != 0 && i % 50 == 0)
      std::cout << std::endl;
    std::cout << "\033[1;34m|\033[0m";
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
              << " of damage ! \U0001F52B" << std::endl;
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
  if (this->_hitPoints <= amount) {
    std::cout << _name << " takes " << amount << " point"
              << (amount <= 1 ? "" : "s") << " of damage \U0001F635"
              << std::endl;
    std::cout << _name << " is dead... \U0001F47B" << std::endl;
    this->_hitPoints = 0;
  } else {
    this->_hitPoints -= amount;
    std::cout << _name << " takes " << amount << " point"
              << (amount <= 1 ? "" : "s") << " of damage \U0001F635"
              << std::endl;
    displayStatus();
  }
};

void ClapTrap::beRepaired(unsigned int amount) {
  if (this->_energyPoints != 0 && this->_hitPoints != 0) {
    this->_hitPoints += amount;
    this->_energyPoints--;
    std::cout << _name << " repairs, getting " << amount << " life point"
              << (amount <= 1 ? "" : "s") << " back! " << std::endl;
    displayStatus();
  } else if (this->_hitPoints == 0)
    std::cout << _name << " can't repair because it's dead... \U0001F47B"
              << std::endl;
  else if (this->_energyPoints == 0)
    std::cout << _name << " does not have enough energy to repair ! \U0001F6AB"
              << std::endl;
};
