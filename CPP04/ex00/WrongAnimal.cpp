#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal() {
  std::cout << "WrongAnimal Default constructor called" << std::endl;
  type = "WrongAnimal";
}

WrongAnimal::WrongAnimal(WrongAnimal const& f) {
  std::cout << "WrongAnimal Copy constructor called" << std::endl;
  type = f.getType();
};

WrongAnimal& WrongAnimal::operator=(WrongAnimal const& f) {
  std::cout << "WrongAnimal Copy assignment operator called" << std::endl;
  type = f.getType();
  return (*this);
};

WrongAnimal::~WrongAnimal() {
  std::cout << "WrongAnimal Destructor called" << std::endl;
};

void WrongAnimal::makeSound(void) {
  std::cout << "* Making a creepy wrong animal sound *" << std::endl;
}

std::string WrongAnimal::getType(void) const {
  return (type);
}