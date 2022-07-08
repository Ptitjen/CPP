#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <iostream>

class Animal {
 public:
  Animal();                            // Constructeur par défaut
  Animal(Animal const& f);             // Constructeur de recopie
  Animal& operator=(Animal const& f);  // Operator d'affectation
  virtual ~Animal();                   // Destructeur

  std::string getType() const;
  virtual void makeSound() const;

 protected:
  std::string type;
};

#endif