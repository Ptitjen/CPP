#include <iostream>

#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongCat.hpp"

int main() {
  std::cout << "\033[1;32m----------------------------------------\033[0m"
            << std::endl
            << "\033[1;32mTesting with Animal, Cat and Dog Classes\033[0m"
            << std::endl
            << "\033[1;32m----------------------------------------\033[0m"
            << std::endl;
  const Animal* meta = new Animal();
  const Animal* j = new Dog();
  const Animal* i = new Cat();
  std::cout << "----------------------------" << std::endl;
  std::cout << std::endl << "\033[1;32mAnimal class:\033[0m" << std::endl;
  std::cout << meta->getType() << " says:" << std::endl;
  meta->makeSound();
  std::cout << std::endl
            << "\033[1;32mDog used as Animal : must display Dog sound\033[0m"
            << std::endl;
  std::cout << j->getType() << " says:" << std::endl;
  j->makeSound();
  std::cout << std::endl
            << "\033[1;32mCat used as Animal : must display Cat sound\033[0m"
            << std::endl;
  std::cout << i->getType() << " says:" << std::endl;
  i->makeSound();

  std::cout << "----------------------------" << std::endl;

  delete (meta);
  delete (j);
  delete (i);

  std::cout << std::endl
            << "\033[1;31m------------------------\033[0m" << std::endl
            << "\033[1;31mTesting with Wrong Class\033[0m" << std::endl
            << "\033[1;31m------------------------\033[0m" << std::endl;
  const WrongAnimal* l = new WrongAnimal();
  const WrongAnimal* k = new WrongCat();
  const WrongCat* m = new WrongCat();
  std::cout << "----------------------------" << std::endl;
  std::cout << std::endl << "\033[1;31mWrong animal class:\033[0m" << std::endl;
  std::cout << l->getType() << " says:" << std::endl;
  l->makeSound();

  std::cout << std::endl
            << "\033[1;31mWrongCat used as Wrong animal : must display Wrong "
               "Animal sound\033[0m"
            << std::endl;
  std::cout << k->getType() << " says:" << std::endl;
  k->makeSound();
  std::cout << std::endl
            << "\033[1;31mWrongCat used as WrongCat : must display WrongCat "
               "sound\033[0m"
            << std::endl;
  std::cout << k->getType() << " says:" << std::endl;
  m->makeSound();

  std::cout << std::endl;
  std::cout << "----------------------------" << std::endl;
  delete (k);
  delete (l);
  delete (m);
  return 0;
}
