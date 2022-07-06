#include "Zombie.hpp"

Zombie* newZombie(std::string name);
void randomChump(std::string name);

/* Goal : creating Zombies on the stack (randomChump) and on the heap
 * (newZombie) */
int main(void) {
  std::cout << std::endl;
  std::cout << "*********************************************" << std::endl;
  std::cout << "Allocating memory for Chumpicorn on the stack" << std::endl;
  std::cout << "*********************************************" << std::endl
            << std::endl;
  randomChump("Chumpicorn");
  std::cout << std::endl << std::endl;

  std::cout << "*******************************************" << std::endl;
  std::cout << "Allocating memory for Zombicorn on the heap" << std::endl;
  std::cout << "*******************************************" << std::endl
            << std::endl;
  Zombie* z = newZombie("Zombicorn");
  z->announce();
  delete (z);
  std::cout << std::endl << std::endl;

  return (0);
}