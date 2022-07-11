#include "Brain.hpp"

Brain::Brain() {
  std::cout << "Brain Default constructor called \U0001F436" << std::endl;
  for (int i = 0; i < 100; i++)
    ideas[i] = ".";
}

Brain::Brain(Brain const& f) {
  std::cout << "Brain Copy constructor called \U0001F436" << std::endl;
  for (int i = 0; i < 100; i++)
    ideas[i] = f.ideas[i];
};

Brain& Brain::operator=(Brain const& f) {
  if (&f == this)
    return (*this);
  std::cout << "Brain Copy assignment operator called \U0001F436" << std::endl;

  for (int i = 0; i < 100; i++)
    ideas[i] = f.getIdea(i);

  return (*this);
};

Brain::~Brain() {
  std::cout << "Brain Destructor called \U0001F436" << std::endl;
};

std::string Brain::getIdea(int n) const {
  return (ideas[n]);
};