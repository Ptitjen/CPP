#include "WrongCat.hpp"

WrongCat::WrongCat() {
  std::cout << "WrongCat Default constructor called \U0001F431" << std::endl;
  type = "WrongCat";
}

WrongCat::WrongCat(WrongCat const& f) : WrongAnimal(f) {
  std::cout << "WrongCat Copy constructor called \U0001F431" << std::endl;
  type = f.getType();
};

WrongCat& WrongCat::operator=(WrongCat const& f) {
  std::cout << "WrongCat Copy assignment operator called \U0001F431"
            << std::endl;
  type = f.getType();
  return (*this);
};

WrongCat::~WrongCat() {
  std::cout << "WrongCat Destructor called \U0001F431" << std::endl;
};
