#ifndef DIAMONDTRAP_HPP
#define DIAMONDTRAP_HPP

#include "FragTrap.hpp"
#include "ScavTrap.hpp"

class DiamondTrap : public virtual ScavTrap, public virtual FragTrap {
 public:
  DiamondTrap(std::string name);                 // Constructeur par défaut
  DiamondTrap(DiamondTrap const& f);             // Constructeur de recopie
  DiamondTrap& operator=(DiamondTrap const& f);  // Operator d'affectation
  ~DiamondTrap();                                // Destructeur

  void attack(const std::string& target);
  void whoAmI(void);

 private:
  std::string _name;
};

#endif