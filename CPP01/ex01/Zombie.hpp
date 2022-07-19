#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <iostream>

class Zombie {
 public:
  Zombie();
  Zombie(std::string name);
  ~Zombie(void);
  void announce(void);
  void setName(std::string name);

 private:
  std::string name;
};

#endif