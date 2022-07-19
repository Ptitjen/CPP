#include "FragTrap.hpp"

FragTrap::FragTrap() {
  std::cout << "FragTrap contructor called \U0001F9DF." << std::endl;
  this->_name = "noname";
  this->_attackDamage = 30;
  this->_energyPoints = 100;
  this->_hitPoints = 100;
}

FragTrap::FragTrap(std::string name) : ClapTrap(name.append("_clap_name")) {
  std::cout << "FragTrap contructor called \U0001F9DF." << std::endl;
  this->_name = name;
  this->_attackDamage = 30;
  this->_energyPoints = 100;
  this->_hitPoints = 100;
}

FragTrap::FragTrap(FragTrap const& f) : ClapTrap(f._name) {
  this->_name = f._name;
  this->_hitPoints = f._hitPoints;
  this->_energyPoints = f._energyPoints;
  this->_attackDamage = f._attackDamage;
  std::cout << "FragTrap copy contructor called \U0001F9DF." << std::endl;
};

FragTrap& FragTrap::operator=(FragTrap const& f) {
  this->_name = f._name;
  this->_hitPoints = f._hitPoints;
  this->_energyPoints = f._energyPoints;
  this->_attackDamage = f._attackDamage;
  std::cout << "FragTrap affectation operator= called \U0001F9DF." << std::endl;

  return (*this);
};

FragTrap::~FragTrap() {
  std::cout << "FragTrap destructor called \U0001F4A5." << std::endl;
};

void FragTrap::highFivesGuys() {
  std::cout << this->_name << " asked for a high five ! \U0001F590 	"
            << std::endl;
}

void FragTrap::attack(const std::string& target) {
  if (this->_energyPoints != 0 && this->_hitPoints != 0) {
    this->_energyPoints--;
    std::cout << _name << " launched a storm attack on " << target
              << ", causing " << this->_attackDamage
              << " points of damage ! \U0001F32A 		" << std::endl;
    displayStatus();
    ;

  } else if (this->_hitPoints == 0)
    std::cout << _name << " is dead... \U0001F47B" << std::endl;
  else if (this->_energyPoints == 0)
    std::cout << _name << " does not have enough energy to attack ! \U0001F6AB"
              << std::endl;
};
unsigned int FragTrap::getDefaultEnergyPoints(void) {
  return (defaultEnergyPoints);
};
unsigned int FragTrap::getDefaultHitPoints(void) {
  return (defaultHitPoints);
};
unsigned int FragTrap::getDefaultAttackDamage(void) {
  return (defaultAttackDamage);
};