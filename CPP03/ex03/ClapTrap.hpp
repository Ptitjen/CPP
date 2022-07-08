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