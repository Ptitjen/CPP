#ifndef BRAIN_HPP
#define BRAIN_HPP

#include <iostream>

class Brain {
 public:
  Brain();
  Brain(Brain const& f);
  Brain& operator=(Brain const& f);
  ~Brain();

  std::string getIdea(int n) const;

 private:
  std::string ideas[100];
};
#endif
