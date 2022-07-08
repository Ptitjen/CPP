#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

#include "ClapTrap.hpp"

class FragTrap : public ClapTrap {
 public:
  FragTrap(std::string name);              // Constructeur par défaut
  FragTrap(FragTrap const& f);             // Constructeur de recopie
  FragTrap& operator=(FragTrap const& f);  // Operator d'affectation
  ~FragTrap();                             // Destructeur

  void highFivesGuys(void);
  void attack(const std::string& target);
};

#endif