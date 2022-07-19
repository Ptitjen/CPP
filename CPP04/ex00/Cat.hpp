#ifndef CAT_HPP
#define CAT_HPP

#include "Animal.hpp"

class Cat : public Animal {
 public:
  Cat();
  Cat(Cat const& f);
  Cat& operator=(Cat const& f);
  virtual ~Cat();

  virtual void makeSound() const;
};

#endif