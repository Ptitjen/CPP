#include <iostream>

#include "ClapTrap.hpp"

int main(void) {
  ClapTrap bloobie("Bloobie");

  bloobie.attack("Zombicorn");
  bloobie.takeDamage(1);
  bloobie.beRepaired(2);
  bloobie.attack("The Great Mighty Unicorn");
  bloobie.beRepaired(1);
  bloobie.attack("SeaGullicorn");
  bloobie.attack("The Great Mighty Zombicorn");
  bloobie.attack("The Great SeaGull");
  bloobie.beRepaired(1);
  bloobie.attack("The Great Mighty Unicorn");
  bloobie.beRepaired(1);
  bloobie.attack("Zombicorn");
  bloobie.beRepaired(1);
  return 0;
}