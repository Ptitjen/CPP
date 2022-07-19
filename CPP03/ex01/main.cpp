#include <iostream>

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int main(void) {
  std::string sep =
      "-------------------------------------------------------------------";
  {
    std::cout << sep << std::endl;
    std::cout << "... CREATING A SCAVTRAP ..." << std::endl;
    std::cout << sep << std::endl;

    ScavTrap bigzombicorn("Big Zombicorn");
    std::cout << sep << std::endl;

    bigzombicorn.guardGate();
    std::cout << sep << std::endl;

    bigzombicorn.attack("Unicorn");
    std::cout << sep << std::endl;

    bigzombicorn.takeDamage(50);
    std::cout << sep << std::endl;

    bigzombicorn.beRepaired(2);
    std::cout << sep << std::endl;
  }

  return 0;
}