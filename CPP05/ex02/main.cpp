#include <exception>
#include <iostream>

#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

int main() {
  srand(time(NULL));
  std::cout << std::endl
            << "\033[1;33m----- Creating Bureaucrats -----\033[0m" << std::endl;
  Bureaucrat b1("Middle one", 70);
  std::cout << b1 << std::endl;
  Bureaucrat b2("Chief", 1);
  std::cout << b2 << std::endl;
  Bureaucrat b3("Noob", 144);
  std::cout << b3 << std::endl;

  std::cout << std::endl
            << "\033[1;33m----- Creating Forms -----\033[0m" << std::endl;
  ShrubberyCreationForm f1("Shrubber", "F1 schrubber form");
  std::cout << f1 << std::endl;
  RobotomyRequestForm f2("Robot", "F2 robot form");
  std::cout << f2 << std::endl;
  PresidentialPardonForm f3("President", "F3 president form");
  std::cout << f3 << std::endl;

  std::cout << std::endl
            << "\033[1;33m----- Executing Forms -----\033[0m" << std::endl;
  std::cout << std::endl
            << "\033[1;31m--- Forbidden - not signed\033[0m" << std::endl;
  b2.executeForm(f1);
  std::cout << std::endl
            << "\033[1;31m--- Forbidden - not graded enough :\033[0m"
            << std::endl;
  b2.signForm(f2);
  b3.executeForm(f2);
  std::cout << std::endl;

  std::cout << std::endl << "\033[1;34m--- Allowed\033[0m" << std::endl;
  b2.signForm(f1);
  b2.signForm(f3);
  std::cout << std::endl;
  b1.executeForm(f1);
  std::cout << std::endl;
  b2.executeForm(f2);
  std::cout << std::endl;
  b2.executeForm(f2);
  std::cout << std::endl;
  b2.executeForm(f2);
  std::cout << std::endl;
  b2.executeForm(f2);
  std::cout << std::endl;
  b2.executeForm(f3);

  std::cout << std::endl << std::endl;

  return 0;
}