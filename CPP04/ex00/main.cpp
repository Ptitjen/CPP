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
  std::cout << "-------------------------------------" << std::endl
            << "Testing with Animal, Cat and Dog Class" << std::endl
            << "--------------------------------------" << std::endl;
  std::cout << j->getType() << " " << std::endl;
  j->makeSound();
  std::cout << i->getType() << " " << std::endl;
  i->makeSound();
  std::cout << meta->getType() << " " << std::endl;
  meta->makeSound();

  std::cout << "------------------------" << std::endl
            << "Testing with Wrong Class" << std::endl
            << "------------------------" << std::endl;
  std::cout << k->getType() << " " << std::endl;
  k->makeSound();
  std::cout << l->getType() << " " << std::endl;
  l->makeSound();
  return 0;
}