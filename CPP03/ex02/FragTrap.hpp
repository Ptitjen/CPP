#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

#include "ClapTrap.hpp"

class FragTrap : public ClapTrap {
public:
  FragTrap();
  FragTrap(std::string name);
  FragTrap(FragTrap const &f);
  FragTrap &operator=(FragTrap const &f);
  ~FragTrap();

  void highFivesGuys(void);
  void attack(const std::string &target);
};

#endif