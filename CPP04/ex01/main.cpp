#include <iostream>

#include "Cat.hpp"
#include "Dog.hpp"

int main() {
  {
    {
      std::cout << "\033[1;36m---------------------------\033[0m" << std::endl
                << "\033[1;36mTesting leaks & destructors\033[0m" << std::endl
                << "\033[1;36m---------------------------\033[0m" << std::endl;

      const Animal* j = new Dog();
      std::cout << "---" << std::endl;
      const Animal* i = new Cat();
      std::cout << "---" << std::endl;
      delete j;
      std::cout << "---" << std::endl;
      delete i;
    }
    std::cout << std::endl
              << "\033[1;32m------------------------------------------\033[0m"
              << std::endl
              << "\033[1;32mCreating an array of half cat and half dog\033[0m"
              << std::endl
              << "\033[1;32m------------------------------------------\033[0m"
              << std::endl;

    int n = 10;
    Animal* array[n];
    std::cout << std::endl << "\033[1;32mCats:\033[0m" << std::endl;
    for (int i = 0; i < n / 2; i++) {
      array[i] = new Cat();
      std::cout << "---" << std::endl;
    }
    std::cout << std::endl << "\033[1;32mDogs:\033[0m" << std::endl;
    for (int i = n / 2; i < n; i++) {
      array[i] = new Dog();
      std::cout << "---" << std::endl;
    }
    std::cout << std::endl << "\033[1;32mDeleting array:\033[0m" << std::endl;
    for (int i = 0; i < n; i++) {
      delete (array[i]);
      std::cout << "---" << std::endl;
    }
  }
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
    std::cout << "-- Ideas --" << std::endl;
    for (int i = 0; i < 100; i++) {
      std::cout << c3.getBrain()->getIdea(i) << " "
                << c4.getBrain()->getIdea(i);
    }
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
    std::cout << "-- Ideas --" << std::endl;
    for (int i = 0; i < 100; i++)
      std::cout << c1.getBrain()->getIdea(i) << " "
                << c2.getBrain()->getIdea(i);
    std::cout << std::endl;
    Dog d1;
    Dog d2 = d1;
    std::cout << std::endl
              << "Address of Dog1 brain : " << &d1
              << " / Address of Dog2 brain : " << &d2 << std::endl;
    std::cout << std::endl;
    std::cout << std::endl
              << std::endl
              << "------------- Calling destructors -------------" << std::endl;
  }
  return 0;
}
