#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

#include "ClapTrap.hpp"

class FragTrap : public virtual ClapTrap {
 public:
  FragTrap(std::string name);              // Constructeur par défaut
  FragTrap(FragTrap const& f);             // Constructeur de recopie
  FragTrap& operator=(FragTrap const& f);  // Operator d'affectation
  ~FragTrap();                             // Destructeur

  void highFivesGuys(void);
  void attack(const std::string& target);

  static unsigned int getDefaultEnergyPoints(void);
  static unsigned int getDefaultHitPoints(void);
  static unsigned int getDefaultAttackDamage(void);

 private:
  const static unsigned int defaultEnergyPoints = 100;
  const static unsigned int defaultHitPoints = 100;
  const static unsigned int defaultAttackDamage = 30;
};

#endif