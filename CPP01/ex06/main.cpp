#include <fstream>
#include <iostream>
#include <string>

#include "Harl.hpp"

int main(int argc, char **argv) {
  if (argc == 2) {
    Harl h;
    std::string str;

    str = argv[1];
    h.harlFilter(str);

  } else
    std::cout << "Wrong number of arguments" << std::endl;
  return (0);
}