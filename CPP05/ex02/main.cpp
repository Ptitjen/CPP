#include <exception>
#include <iostream>

#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

int main() {
  std::cout << std::endl << " ----- Creating Bureaucrats -----" << std::endl;
  Bureaucrat b1("Middle one", 30);
  std::cout << b1 << std::endl;
  Bureaucrat b2("Chief", 1);
  std::cout << b2 << std::endl;
  Bureaucrat b3("Noob", 150);
  std::cout << b3 << std::endl;

  std::cout << std::endl << " ----- Creating Forms -----" << std::endl;
  ShrubberyCreationForm f1("Shrubber", "F1 schrubber form");
  std::cout << f1 << std::endl;
  RobotomyRequestForm f2("Robot", "F2 robot form");
  std::cout << f2 << std::endl;
  PresidentialPardonForm f3("President", "F3 president form");
  std::cout << f3 << std::endl;

  std::cout << std::endl << " ----- Executing Forms -----" << std::endl;
  std::cout << std::endl << " --- Forbidden - not signed" << std::endl;
  b2.executeForm(f1);
  std::cout << std::endl << " --- Forbidden - not graded enough" << std::endl;
  b2.signForm(f1);
  b3.executeForm(f1);
  std::cout << std::endl;

  std::cout << std::endl << " --- Allowed" << std::endl;
  b2.signForm(f2);
  b2.signForm(f3);
  std::cout << std::endl;
  b1.executeForm(f1);
  std::cout << std::endl;
  b1.executeForm(f2);
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
  std::cout << std::endl << " --- Calling destructors ---" << std::endl;

  return 0;
}