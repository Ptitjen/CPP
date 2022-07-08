#include <iostream>

#include "ClapTrap.hpp"
#include "DiamondTrap.hpp"
#include "FragTrap.hpp"
#include "ScavTrap.hpp"

int main(void) {
  // {
  //   std::cout << std::endl << "... CREATING A CLAPTRAP ..." << std::endl;
  //   ClapTrap bloobie("Bloobie");
  //   bloobie.attack("Zombicorn");
  //   bloobie.takeDamage(1);
  //   bloobie.beRepaired(2);
  // }
  // {
  //   std::cout << std::endl << "... CREATING A SCAVTRAP ..." << std::endl;
  //   ScavTrap bigbloobie("Big Bloobie");
  //   bigbloobie.guardGate();
  //   bigbloobie.attack("Zombicorn");
  //   bigbloobie.takeDamage(1);
  //   bigbloobie.beRepaired(2);
  // }

  // {
  //   std::cout << std::endl << "... CREATING A FRAGTRAP ..." << std::endl;
  //   FragTrap bigbigbloobie("Big Big Bloobie");
  //   bigbigbloobie.highFivesGuys();
  //   bigbigbloobie.attack("Zombicorn");
  //   bigbigbloobie.takeDamage(50);
  //   bigbigbloobie.beRepaired(2);
  // }

  {
    std::cout << std::endl << "... CREATING A DIAMONDTRAP ..." << std::endl;
    DiamondTrap gmbloobie("The Great Mighty Bloobie");
    gmbloobie.whoAmI();
    gmbloobie.highFivesGuys();
    gmbloobie.guardGate();
    gmbloobie.attack("Zombicorn");
    gmbloobie.takeDamage(50);
    gmbloobie.beRepaired(2);
  }

  return 0;
}