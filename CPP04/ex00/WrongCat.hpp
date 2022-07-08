#ifndef WRONGCAT_HPP
#define WRONGCAT_HPP

#include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal {
 public:
  WrongCat();                              // Constructeur par défaut
  WrongCat(WrongCat const& f);             // Constructeur de recopie
  WrongCat& operator=(WrongCat const& f);  // Operator d'affectation
  virtual ~WrongCat();                     // Destructeur
};

#endif