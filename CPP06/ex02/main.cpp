#include <exception>
#include <iostream>

#include "A.hpp"
#include "B.hpp"
#include "C.hpp"

Base* generate(void) {
  int n = std::rand();
  if (n % 3 == 0)
    return (new C());
  if (n % 3 == 1)
    return (new B());
  return (new A());
};

void identify(Base* p) {
  if (dynamic_cast<C*>(p) != 0)
    std::cout << "Type C" << std::endl;
  if (dynamic_cast<B*>(p) != 0)
    std::cout << "Type B" << std::endl;
  if (dynamic_cast<A*>(p) != 0)
    std::cout << "Type A" << std::endl;
};

void identify(Base& p) {
  try {
    (void)dynamic_cast<C&>(p);
    std::cout << "Type C" << std::endl;

  } catch (std::exception& e) {
  }
  try {
    (void)dynamic_cast<B&>(p);
    std::cout << "Type B" << std::endl;

  } catch (std::exception& e) {
  }
  try {
    (void)dynamic_cast<A&>(p);
    std::cout << "Type A" << std::endl;

  } catch (std::exception& e) {
  }
};

int main() {
  srand(time(NULL));
  Base* b = generate();
  identify(b);
  identify(*b);
  delete b;
  return 0;
}