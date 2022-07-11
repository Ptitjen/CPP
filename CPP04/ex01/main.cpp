#include <iostream>

#include "Cat.hpp"
#include "Dog.hpp"

int main() {
  const Animal* j = new Dog();
  const Animal* i = new Cat();
  delete j;
  delete i;

  // tableau
  int n = 20;
  Animal* array[n];
  for (int i = 0; i < n / 2; i++)
    array[i] = new Cat();

  for (int i = n / 2; i < n; i++)
    array[i] = new Dog();

  for (int i = 0; i < n; i++)
    delete (array[i]);

  // cpy constructor - deep
  Cat c3;
  Cat c4 = Cat(c3);
  std::cout << &c3 << " " << &c4 << std::endl;
  for (int i = 0; i < 100; i++) {
    std::cout << c3.getBrain()->getIdea(i) << " " << c4.getBrain()->getIdea(i);
    std::cout << (c3.getBrain()->getIdea(i)) << " "
              << (c4.getBrain()->getIdea(i));
  }

  // cpy operator - deep
  Cat c1;
  Cat c2;
  c2 = c1;
  std::cout << &c1 << " " << &c2 << std::endl;
  for (int i = 0; i < 100; i++)
    std::cout << c1.getBrain()->getIdea(i) << " " << c2.getBrain()->getIdea(i);

  return 0;
}
