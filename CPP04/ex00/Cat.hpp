#ifndef CAT_HPP
#define CAT_HPP

#include "Animal.hpp"

class Cat : public Animal {
 public:
  Cat();                         // Constructeur par défaut
  Cat(Cat const& f);             // Constructeur de recopie
  Cat& operator=(Cat const& f);  // Operator d'affectation
  ~Cat();                        // Destructeur

 private:
  void makeSound() const;
};

#endif