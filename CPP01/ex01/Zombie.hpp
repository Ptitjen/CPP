#ifndef ZOMBIE_H
#define ZOMBIE_H

#include <iostream>

class Zombie {
 public:
  Zombie(void);
  ~Zombie(void);
  void announce(void);
  void name(std::string name);

 private:
  std::string _name;
};

#endif