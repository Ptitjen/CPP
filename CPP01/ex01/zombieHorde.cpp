#include "Zombie.hpp"

Zombie *zombieHorde(int N, std::string name) {
  if (N > 0) {
    std::cout << "Creating a horde of " << N << " zombies..." << std::endl;
    Zombie *horde = new Zombie[N];
    for (int i = 0; i < N; i++) horde[i].setName(name);
    return (horde);
  }
  std::cout << "Invalid number of Zombies. Cannot create the horde."
            << std::endl;
  return (NULL);
}