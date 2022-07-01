#include "Zombie.hpp"

//TO DO : change this version of class zombie with ex01 version?
Zombie* newZombie (std::string name);
void randomChump (std::string name);

/* Goal : creating Zombies on the stack (randomChump) and on the heap (newZombie) */
int main (void)
{
	std::cout << std::endl;
	std::cout << "*********************************************" << std::endl;
	std::cout << "Allocating memory for Chumpicorn on the stack" << std::endl;
	std::cout << "*********************************************" << std::endl << std::endl;
	randomChump("Chumpicorn");
	std::cout << std::endl;
	std::cout << std::endl;

	std::cout << "*******************************************" << std::endl;
	std::cout << "Allocating memory for Zombicorn on the heap" << std::endl;
	std::cout << "*******************************************" << std::endl << std::endl;
	Zombie* Z = newZombie("Zombicorn");
	Z->announce();
	delete(Z);
	std::cout << std::endl;
	std::cout << std::endl;
	return (0);
}