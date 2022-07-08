#include "Cat.hpp"

Cat::Cat() {
  std::cout << "Cat Default constructor called \U0001F431" << std::endl;
  type = "Cat";
}

Cat::Cat(Cat const& f) : Animal(f) {
  std::cout << "Cat Copy constructor called \U0001F431" << std::endl;
  type = f.getType();
};

Cat& Cat::operator=(Cat const& f) {
  std::cout << "Cat Copy assignment operator called \U0001F431" << std::endl;
  type = f.getType();
  return (*this);
};

Cat::~Cat() {
  std::cout << "Cat Destructor called \U0001F431" << std::endl;
};

void Cat::makeSound(void) const {
  std::cout << "Meeeeeeeeeoooooooooooooow" << std::endl;
}