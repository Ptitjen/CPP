#include <exception>
#include <iostream>
#include "Bureaucrat.hpp"
#include "Form.hpp"

int main() {
  std::cout << std::endl << " ----- Creating Bureaucrats -----" << std::endl;
  Bureaucrat b1("Blou", 20);
  std::cout << b1;
  Bureaucrat b2("Bli", 1);
  std::cout << b2;
  Bureaucrat b3("Bla", 150);
  std::cout << b3;

  std::cout << std::endl << " ----- Creating Forms -----" << std::endl;
  Form f1("F1", 50, 20);
  std::cout << f1;
  Form f2("F2", 50, 20);
  std::cout << f2;

  std::cout << std::endl << " ----- Signing Forms -----" << std::endl;
  std::cout << std::endl << "--- Allowed:" << std::endl;
  b2.signForm(f1);

  std::cout << std::endl << "--- Forbidden:" << std::endl;
  b3.signForm(f2);
  std::cout << std::endl << "--- Allowed:" << std::endl;
  b1.signForm(f2);
  std::cout << std::endl << "--- Useless:" << std::endl;
  b2.signForm(f2);
  std::cout << std::endl;

  return 0;
}