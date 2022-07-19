#ifndef WRONGCAT_HPP
#define WRONGCAT_HPP

#include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal {
 public:
  WrongCat();
  WrongCat(WrongCat const& f);
  WrongCat& operator=(WrongCat const& f);
  virtual ~WrongCat();

  void makeSound() const;
};

#endif