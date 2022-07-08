#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <string>

class ClapTrap {
 public:
  ClapTrap(std::string name);              // Constructeur par défaut
  ClapTrap(ClapTrap const& f);             // Constructeur de recopie
  ClapTrap& operator=(ClapTrap const& f);  // Operator d'affectation
  ~ClapTrap();                             // Destructeur

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