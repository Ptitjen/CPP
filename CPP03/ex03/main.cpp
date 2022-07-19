#include <iostream>

#include "ClapTrap.hpp"
#include "DiamondTrap.hpp"
#include "FragTrap.hpp"
#include "ScavTrap.hpp"

int main(void) {
  {
    std::string sep =
        "-------------------------------------------------------------------";
    std::cout << std::endl << "... CREATING A DIAMONDTRAP ..." << std::endl;
    std::cout << sep << std::endl;
    DiamondTrap gmzombicorn("Glittery Zombicorn");
    std::cout << sep << std::endl;
    gmzombicorn.whoAmI();
    std::cout << sep << std::endl;
    gmzombicorn.highFivesGuys();
    std::cout << sep << std::endl;
    gmzombicorn.guardGate();
    std::cout << sep << std::endl;
    gmzombicorn.attack("Unicorn");
    std::cout << sep << std::endl;
    gmzombicorn.takeDamage(50);
    std::cout << sep << std::endl;
    gmzombicorn.beRepaired(2);
    std::cout << sep << std::endl;
  }

  return 0;
}