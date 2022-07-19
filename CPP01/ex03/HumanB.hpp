#ifndef HUMANB_HPP
#define HUMANB_HPP

#include <iostream>

#include "Weapon.hpp"

class HumanB {
 public:
  HumanB(std::string const& name);
  ~HumanB(void);

  void attack(void);
  void setWeapon(Weapon& w);

 private:
  std::string _name;
  Weapon* _w;
};

#endif