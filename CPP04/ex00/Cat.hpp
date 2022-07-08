#ifndef CAT_HPP
#define CAT_HPP

#include "Animal.hpp"

class Cat : public Animal {
 public:
  Cat();                         // Constructeur par défaut
  Cat(Cat const& f);             // Constructeur de recopie
  Cat& operator=(Cat const& f);  // Operator d'affectation
  virtual ~Cat();                // Destructeur
  virtual void makeSound() const;
};

#endif