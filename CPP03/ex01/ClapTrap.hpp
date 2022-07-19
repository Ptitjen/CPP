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

 protected:
  std::string _name;
  unsigned int _hitPoints;
  unsigned int _energyPoints;
  unsigned int _attackDamage;
};

#endif