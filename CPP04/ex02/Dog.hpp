#ifndef DOG_HPP
#define DOG_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Dog : public Animal {
 public:
  Dog();                         
  Dog(Dog const& f);             
  Dog& operator=(Dog const& f);  
  virtual ~Dog();                
  virtual void makeSound() const;

  Brain* getBrain() const;

 private:
  Brain* b;
};

#endif
