#include "Cat.hpp"

Cat::Cat() {
  std::cout << "Cat Default constructor called \U0001F431" << std::endl;
  type = "Cat";
  b = new Brain();
}

Cat::Cat(Cat const& f) : Animal(f) {
  std::cout << "Cat Copy constructor called \U0001F431" << std::endl;
  type = f.getType();
  b = new Brain(*(f.getBrain()));
};

Cat& Cat::operator=(Cat const& f) {
  if (&f == this)
    return (*this);
  std::cout << "Cat Copy assignment operator called \U0001F431" << std::endl;
  type = f.getType();
  *b = *f.getBrain();
  return (*this);
};

Cat::~Cat() {
  std::cout << "Cat Destructor called \U0001F431" << std::endl;
  delete b;
};

void Cat::makeSound(void) const {
  std::cout << "* Meeeeeeeeeoooooooooooooow *" << std::endl;
}

Brain* Cat::getBrain(void) const {
  return (b);
}