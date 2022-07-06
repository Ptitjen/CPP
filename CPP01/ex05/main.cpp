#include <fstream>
#include <iostream>
#include <string>

#include "Harl.hpp"

int main(void) {
  Harl h;

  std::cout << "*************************" << std::endl;
  std::cout << "Testing Harl with nothing" << std::endl;
  std::cout << "*************************" << std::endl << std::endl;
  h.complain("");
  std::cout << std::endl << std::endl;

  std::cout << "***************************" << std::endl;
  std::cout << "Testing Harl with 'Unicorn'" << std::endl;
  std::cout << "***************************" << std::endl << std::endl;
  h.complain("Unicorn");
  std::cout << std::endl << std::endl;

  std::cout << "*****************************************" << std::endl;
  std::cout << "Testing Harl with 'Unicorns eat rainbows'" << std::endl;
  std::cout << "*****************************************" << std::endl
            << std::endl;
  h.complain("Unicorn eat rainbows");
  std::cout << std::endl << std::endl;

  std::cout << "***********************" << std::endl;
  std::cout << "Testing Harl with DEBUG" << std::endl;
  std::cout << "***********************" << std::endl << std::endl;
  h.complain("DEBUG");
  std::cout << std::endl << std::endl;

  std::cout << "**********************" << std::endl;
  std::cout << "Testing Harl with INFO" << std::endl;
  std::cout << "**********************" << std::endl << std::endl;
  h.complain("INFO");
  std::cout << std::endl << std::endl;

  std::cout << "*************************" << std::endl;
  std::cout << "Testing Harl with WARNING" << std::endl;
  std::cout << "*************************" << std::endl << std::endl;
  h.complain("WARNING");
  std::cout << std::endl << std::endl;

  std::cout << "***********************" << std::endl;
  std::cout << "Testing Harl with ERROR" << std::endl;
  std::cout << "***********************" << std::endl << std::endl;
  h.complain("ERROR");
  std::cout << std::endl << std::endl;

  return (0);
}