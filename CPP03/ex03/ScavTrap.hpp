#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

#include "ClapTrap.hpp"

class ScavTrap : public virtual ClapTrap {
public:
  ScavTrap();
  ScavTrap(std::string name);
  ScavTrap(ScavTrap const &f);
  ScavTrap &operator=(ScavTrap const &f);
  ~ScavTrap();

  void guardGate(void);
  void attack(const std::string &target);

  static unsigned int getDefaultEnergyPoints(void);
  static unsigned int getDefaultHitPoints(void);
  static unsigned int getDefaultAttackDamage(void);

private:
  const static unsigned int defaultEnergyPoints = 50;
  const static unsigned int defaultHitPoints = 100;
  const static unsigned int defaultAttackDamage = 20;
};

#endif