#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <iostream>
#include <string>

class ClapTrap {
 public:
  ClapTrap();
  ClapTrap(std::string name);
  ClapTrap(ClapTrap const& f);
  ClapTrap& operator=(ClapTrap const& f);
  ~ClapTrap();

  void attack(const std::string& target);
  void takeDamage(unsigned int amount);
  void beRepaired(unsigned int amount);
  void displayStatus(void);

  static unsigned int getDefaultEnergyPoints(void);
  static unsigned int getDefaultHitPoints(void);
  static unsigned int getDefaultAttackDamage(void);

 protected:
  std::string _name;
  unsigned int _hitPoints;
  unsigned int _energyPoints;
  unsigned int _attackDamage;

 private:
  const static unsigned int defaultEnergyPoints = 10;
  const static unsigned int defaultHitPoints = 10;
  const static unsigned int defaultAttackDamage = 0;
};

#endif