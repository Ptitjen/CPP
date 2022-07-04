#include "Zombie.hpp"

Zombie*    zombieHorde(int N, std::string name);

/* Goal : creating multiple Zombies with new [] */
int main (void)
{
	Zombie* Z = zombieHorde(42, "Zombicorn");
	for (int i = 0; i < 42; i ++)
        Z[i].announce(); 
	delete [] Z;
	return (0);
}