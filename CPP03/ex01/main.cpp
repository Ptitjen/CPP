#include <iostream>

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int main(void) {
  {
    std::cout << std::endl << "... CREATING A CLAPTRAP ..." << std::endl;
    ClapTrap bloobie("Bloobie");
    bloobie.attack("Zombicorn");
    bloobie.takeDamage(1);
    bloobie.beRepaired(2);
  }
  {
    std::cout << std::endl << "... CREATING A SCAVTRAP ..." << std::endl;
    ScavTrap bigbloobie("Big Bloobie");
    bigbloobie.guardGate();
    bigbloobie.attack("Zombicorn");
    bigbloobie.takeDamage(1);
    bigbloobie.beRepaired(2);
  }

  return 0;
}