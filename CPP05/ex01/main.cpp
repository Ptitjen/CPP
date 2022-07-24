#include <exception>
#include <iostream>
#include "Bureaucrat.hpp"
#include "Form.hpp"

int main() {
  std::cout << std::endl
            << "\033[1;33m----- Creating Bureaucrats -----\033[0m" << std::endl;
  Bureaucrat b1("Blou", 20);
  std::cout << b1;
  Bureaucrat b2("Bli", 1);
  std::cout << b2;
  Bureaucrat b3("Bla", 150);
  std::cout << b3;

  std::cout << std::endl
            << "\033[1;33m----- Creating Form -----\033[0m" << std::endl;
  Form f1("F1", 50, 20);
  std::cout << f1;
  Form f2("F2", 50, 20);
  std::cout << f2;
  try {
    std::cout << std::endl
              << "\033[1;31m----- Form errors -----\033[0m" << std::endl;
    Form f4("F4", 0, 20);

  } catch (std::exception& e) {
    std::cout << e.what() << std::endl;
  }
  try {
    Form f3("F3", 50, 151);

  } catch (std::exception& e) {
    std::cout << e.what() << std::endl;
  }
  std::cout << std::endl
            << "\033[1;34m----- Signing Forms -----\033[0m" << std::endl;
  try {
    std::cout << "--- Allowed:" << std::endl;
    b2.signForm(f1);
  } catch (std::exception& e) {
    std::cout << e.what() << std::endl;
  }
  try {
    std::cout << std::endl << "--- Forbidden:" << std::endl;
    b3.signForm(f2);
  } catch (std::exception& e) {
    std::cout << e.what() << std::endl;
  }
  try {
    std::cout << std::endl << "--- Allowed:" << std::endl;
    b1.signForm(f2);
  } catch (std::exception& e) {
    std::cout << e.what() << std::endl;
  }
  try {
    std::cout << std::endl << "--- Useless:" << std::endl;
    b2.signForm(f2);
    std::cout << std::endl;
  } catch (std::exception& e) {
    std::cout << e.what() << std::endl;
  }

  return 0;
}