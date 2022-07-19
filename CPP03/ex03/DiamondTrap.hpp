#ifndef DIAMONDTRAP_HPP
#define DIAMONDTRAP_HPP

#include "FragTrap.hpp"
#include "ScavTrap.hpp"

class DiamondTrap : public virtual ScavTrap, public virtual FragTrap {
 public:
  DiamondTrap();
  DiamondTrap(std::string name);
  DiamondTrap(DiamondTrap const& f);
  DiamondTrap& operator=(DiamondTrap const& f);
  ~DiamondTrap();

  void attack(const std::string& target);
  void whoAmI(void);

 private:
  std::string _name;
};

#endif