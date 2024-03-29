#ifndef WEAPON_HPP
#define WEAPON_HPP

#include <iostream>

class Weapon {
 public:
  Weapon(std::string const& type);
  ~Weapon(void);
  std::string const& getType(void);
  void setType(std::string const& newType);

 private:
  std::string type;
};

#endif