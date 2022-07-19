#include <iostream>

#include "ClapTrap.hpp"

int main(void) {
  std::string sep =
      "-------------------------------------------------------------------";
  ClapTrap zombicorn("Zombicorn");
  std::cout << sep << std::endl;
  zombicorn.attack("Unicorn");
  std::cout << sep << std::endl;
  zombicorn.takeDamage(2);
  std::cout << sep << std::endl;
  zombicorn.beRepaired(2);
  std::cout << sep << std::endl;
  zombicorn.takeDamage(10);
  std::cout << sep << std::endl;
  zombicorn.attack("Unicorn");
  std::cout << sep << std::endl;
  zombicorn.beRepaired(1);
  std::cout << sep << std::endl;
  return 0;
}