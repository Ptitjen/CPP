#include "Dog.hpp"

Dog::Dog() {
  std::cout << "Dog Default constructor called \U0001F436" << std::endl;
  type = "Dog";
  b = new Brain();
}

Dog::Dog(Dog const& f) : Animal(f) {
  std::cout << "Dog Copy constructor called \U0001F436" << std::endl;
  type = f.getType();
  b = new Brain(*(f.getBrain()));
};

Dog& Dog::operator=(Dog const& f) {
  if (&f == this)
    return (*this);
  std::cout << "Dog Copy assignment operator called \U0001F436" << std::endl;
  type = f.getType();
  *b = *f.getBrain();
  return (*this);
};

Dog::~Dog() {
  std::cout << "Dog Destructor called \U0001F436" << std::endl;
  delete (b);
};

void Dog::makeSound(void) const {
  std::cout << "* Waaaaaaaaaaf *" << std::endl;
}

Brain* Dog::getBrain(void) const {
  return (b);
}