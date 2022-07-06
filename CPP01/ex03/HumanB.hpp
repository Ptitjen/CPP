#ifndef HUMANB_H
#define HUMANB_H

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