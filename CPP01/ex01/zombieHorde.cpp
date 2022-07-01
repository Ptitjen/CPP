#include "Zombie.hpp"

Zombie*    zombieHorde(int N, std::string name)
{
    Zombie* zombieHorde = new Zombie[N] ;//how to pass parameters?
    for (int i = 0; i < N; i ++)
        zombieHorde[i].name(name); 
    return (zombieHorde);
}