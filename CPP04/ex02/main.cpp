#include <iostream>

#include "Cat.hpp"
#include "Dog.hpp"

int main() {
  {
    std::cout << std::endl
              << "\033[1;36m------------------------\033[0m" << std::endl
              << "\033[1;36mTesting copy constructor\033[0m" << std::endl
              << "\033[1;36m------------------------\033[0m" << std::endl;
    Cat c3;
    Cat c4 = Cat(c3);
    std::cout << std::endl
              << "Address of Cat1 brain : " << &c3
              << " / Address of Cat2 brain : " << &c4 << std::endl;

    Dog d3;
    Dog d4 = Dog(d3);
    std::cout << std::endl
              << "Address of Dog1 brain : " << &d3
              << " / Address of Dog2 brain : " << &d4 << std::endl;

    std::cout << std::endl
              << std::endl
              << "------------- Calling destructors -------------" << std::endl;
  }
  {
    std::cout << std::endl
              << "\033[1;34m----------------------\033[0m" << std::endl
              << "\033[1;34mTesting copy operator\033[0m" << std::endl
              << "\033[1;34m----------------------\033[0m" << std::endl;

    Cat c1;
    Cat c2 = c1;

    std::cout << std::endl
              << "Address of Cat1 brain : " << &c1
              << " / Address of Cat2 brain : " << &c2 << std::endl;
    std::cout << std::endl;

    Dog d1;
    Dog d2 = d1;
    std::cout << std::endl
              << "Address of Dog1 brain : " << &d1
              << " / Address of Dog2 brain : " << &d2 << std::endl;
    std::cout << std::endl
              << std::endl
              << "------------- Calling destructors -------------" << std::endl;
  }
  {

    std::cout << std::endl
              << "\033[1;32m---------------------------\033[0m" << std::endl
              << "\033[1;32mTesting Cat and Dog Classes\033[0m" << std::endl
              << "\033[1;32m---------------------------\033[0m" << std::endl;
    const Cat j;
    const Dog i;
    std::cout << std::endl << "Dog 1 : " << std::endl;
    std::cout << j.getType() << " says:" << std::endl;
    j.makeSound();
    std::cout << std::endl << "Testing Cat class..." << std::endl;

    std::cout << i.getType() << " says:" << std::endl;
    i.makeSound();
    std::cout << std::endl
              << std::endl
              << "------------- Calling destructors -------------" << std::endl;
  }
  {
    std::cout << std::endl
              << "\033[1;31m---------------------------\033[0m" << std::endl
              << "\033[1;31mTesting Animal Class\033[0m" << std::endl
              << "\033[1;31m---------------------------\033[0m" << std::endl
              << std::endl
              << "\033[1;31m=> Check the code <=\033[0m" << std::endl
              << std::endl;

    // Animal meta;
  }
  return 0;
}
