#include <iostream>

#include "ClapTrap.hpp"
#include "FragTrap.hpp"
#include "ScavTrap.hpp"

int main(void) {
  std::string sep =
      "-------------------------------------------------------------------";

  {
    std::cout << std::endl << "... CREATING A FRAGTRAP ..." << std::endl;
    FragTrap bigbigzombicorn("Big Big Zombicorn");
    std::cout << sep << std::endl;

    bigbigzombicorn.highFivesGuys();
    std::cout << sep << std::endl;

    bigbigzombicorn.attack("Zombicorn");
    std::cout << sep << std::endl;

    bigbigzombicorn.takeDamage(50);
    std::cout << sep << std::endl;

    bigbigzombicorn.beRepaired(2);
    std::cout << sep << std::endl;
  }

  return 0;
}