#include "Animal.hpp"

Animal::Animal() {
  std::cout << "Animal Default constructor called" << std::endl;
}

Animal::Animal(Animal const& f) {
  std::cout << "Animal Copy constructor called" << std::endl;
  type = f.getType();
};

Animal& Animal::operator=(Animal const& f) {
  std::cout << "Animal Copy assignment operator called" << std::endl;
  type = f.getType();
  return (*this);
};

Animal::~Animal() {
  std::cout << "Animal Destructor called" << std::endl;
};

void Animal::makeSound(void) const {
  std::cout << "* Not making any sound *" << std::endl;
}

std::string Animal::getType(void) const {
  return (type);
}