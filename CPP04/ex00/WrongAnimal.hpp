#ifndef WRONGANIMAL_HPP
#define WRONGANIMAL_HPP

#include <iostream>

class WrongAnimal {
 public:
  WrongAnimal();                                 // Constructeur par défaut
  WrongAnimal(WrongAnimal const& f);             // Constructeur de recopie
  WrongAnimal& operator=(WrongAnimal const& f);  // Operator d'affectation
  ~WrongAnimal();                                // Destructeur

  static void makeSound();
  std::string getType() const;

 protected:
  std::string type;
};

#endif