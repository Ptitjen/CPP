#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

#include "ClapTrap.hpp"

class FragTrap : public virtual ClapTrap {
 public:
  FragTrap();
  FragTrap(std::string name);
  FragTrap(FragTrap const& f);
  FragTrap& operator=(FragTrap const& f);
  ~FragTrap();

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