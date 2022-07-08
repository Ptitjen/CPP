#ifndef DOG_HPP
#define DOG_HPP

#include "Animal.hpp"

class Dog : public Animal {
 public:
  Dog();                         // Constructeur par défaut
  Dog(Dog const& f);             // Constructeur de recopie
  Dog& operator=(Dog const& f);  // Operator d'affectation
  virtual ~Dog();                // Destructeur
  virtual void makeSound() const;
};

#endif