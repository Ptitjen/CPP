#ifndef DOG_HPP
#define DOG_HPP

#include "Animal.hpp"

class Dog : public Animal {
 public:
  Dog();                         // Constructeur par défaut
  Dog(Dog const& f);             // Constructeur de recopie
  Dog& operator=(Dog const& f);  // Operator d'affectation
  ~Dog();                        // Destructeur

 private:
  void makeSound() const;
};

#endif