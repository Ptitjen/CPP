#ifndef CAT_HPP
#define CAT_HPP

#include "Animal.hpp"
#include "Brain.hpp"
class Cat : public Animal {
 public:
  Cat();
  Cat(Cat const& f);
  Cat& operator=(Cat const& f);
  virtual ~Cat();
  virtual void makeSound() const;

  Brain* getBrain() const;

 private:
  Brain* b;
};

#endif
