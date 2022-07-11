#include <iostream>

#include "Cat.hpp"
#include "Dog.hpp"

int main() {
  const Cat j;
  const Dog i;

  std::cout << "----------------------------------------" << std::endl
            << "Testing with Animal, Cat and Dog Classes" << std::endl
            << "----------------------------------------" << std::endl;
  std::cout << std::endl << "Testing Dog class..." << std::endl;
  std::cout << j.getType() << " says:" << std::endl;
  j.makeSound();
  std::cout << std::endl << "Testing Cat class..." << std::endl;

  std::cout << i.getType() << " says:" << std::endl;
  i.makeSound();

  // Animal meta;

  return 0;
}
