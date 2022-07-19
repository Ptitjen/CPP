#include <fstream>
#include <iostream>
#include <string>

#include "Harl.hpp"

int main(int argc, char **argv) {
  if (argc == 2) {
    Harl h;
    h.harlFilter(static_cast<std::string>(argv[1]));
  } else
    std::cout << "Wrong number of arguments" << std::endl;
  return (0);
}