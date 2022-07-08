#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap {
 public:
  ScavTrap(std::string name);              // Constructeur par défaut
  ScavTrap(ScavTrap const& f);             // Constructeur de recopie
  ScavTrap& operator=(ScavTrap const& f);  // Operator d'affectation
  ~ScavTrap();                             // Destructeur

  void guardGate(void);
  void attack(const std::string& target);
};

#endif