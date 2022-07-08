#include <iostream>

#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongCat.hpp"

int main() {
  const Animal* meta = new Animal();
  const Animal* j = new Dog();
  const Animal* i = new Cat();
  const WrongAnimal* k = new WrongCat();
  const WrongAnimal* l = new WrongAnimal();
  std::cout << "----------------------------------------" << std::endl
            << "Testing with Animal, Cat and Dog Classes" << std::endl
            << "----------------------------------------" << std::endl;
  std::cout << std::endl << "Testing Dog class..." << std::endl;
  std::cout << j->getType() << " says:" << std::endl;
  j->makeSound();
  std::cout << std::endl << "Testing Cat class..." << std::endl;

  std::cout << i->getType() << " says:" << std::endl;
  i->makeSound();
  std::cout << std::endl << "Testing Animal class..." << std::endl;
  std::cout << meta->getType() << " says:" << std::endl;
  meta->makeSound();

  std::cout << "------------------------" << std::endl
            << "Testing with Wrong Class" << std::endl
            << "------------------------" << std::endl;
  std::cout << std::endl << "Testing WrongCat class..." << std::endl;
  std::cout << k->getType() << " says:" << std::endl;
  k->makeSound();
  std::cout << std::endl << "Testing Wrong animal class..." << std::endl;
  std::cout << l->getType() << " says:" << std::endl;
  l->makeSound();

  delete (i);
  delete (j);
  delete (k);
  delete (meta);
  delete (l);
  return 0;
}