#ifndef WRONGANIMAL_HPP
#define WRONGANIMAL_HPP

#include <iostream>

class WrongAnimal {
 public:
  WrongAnimal();
  WrongAnimal(WrongAnimal const& f);
  WrongAnimal& operator=(WrongAnimal const& f);
  virtual ~WrongAnimal();

  static void makeSound();
  std::string getType() const;

 protected:
  std::string type;
};

#endif