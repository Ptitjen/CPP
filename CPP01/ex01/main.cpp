#include "Zombie.hpp"

Zombie *zombieHorde(int N, std::string name);

int main(void) {
  std::cout << std::endl << "***************************" << std::endl;
  std::cout << "Calling zombieHorde with 42" << std::endl;
  std::cout << "***************************" << std::endl << std::endl;
  Zombie *z1 = zombieHorde(42, "Zombicorn");
  std::cout << std::endl << "Zombies are announcing themselves : " << std::endl;
  for (int i = 0; i < 42; i++) z1[i].announce();
  std::cout << std::endl << "Zombies are destroying themselves : " << std::endl;
  delete[] z1;

  std::cout << std::endl
            << std::endl
            << "**************************" << std::endl;
  std::cout << "Calling zombieHorde with 0" << std::endl;
  std::cout << "**************************" << std::endl << std::endl;
  Zombie *z2 = zombieHorde(0, "Zombicorn");
  std::cout << "Returning NULL : " << z2 << std::endl;

  std::cout << std::endl
            << std::endl
            << "***************************" << std::endl;
  std::cout << "Calling zombieHorde with -2" << std::endl;
  std::cout << "***************************" << std::endl << std::endl;
  Zombie *z3 = zombieHorde(-2, "Zombicorn");
  std::cout << "Returning NULL : " << z3 << std::endl << std::endl;

  return (0);
}