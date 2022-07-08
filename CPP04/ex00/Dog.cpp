#include "Dog.hpp"

Dog::Dog() {
  std::cout << "Dog Default constructor called \U0001F436" << std::endl;
}

Dog::Dog(Dog const& f) : Animal(f) {
  std::cout << "Dog Copy constructor called \U0001F436" << std::endl;
  type = f.getType();
};

Dog& Dog::operator=(Dog const& f) {
  std::cout << "Dog Copy assignment operator called \U0001F436" << std::endl;
  type = f.getType();
  return (*this);
};

Dog::~Dog() {
  std::cout << "Dog Destructor called \U0001F436" << std::endl;
};

void Dog::makeSound(void) const {
  std::cout << "Waaaaaf" << std::endl;
}