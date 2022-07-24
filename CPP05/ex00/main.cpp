#include <exception>
#include <iostream>
#include "Bureaucrat.hpp"

int main() {
  try {
    std::cout << std::endl
              << "\033[1;32m----- Bureaucrats -----\033[0m" << std::endl
              << std::endl;
    Bureaucrat b1("Blou", 20);
    b1.decreaseGrade();
    std::cout << b1;
    b1.increaseGrade();
    std::cout << b1;

  } catch (std::exception& e) {
    std::cout << e.what() << std::endl;
  }
  try {
    std::cout << std::endl;
    Bureaucrat b2("Bli", 1);
    b2.increaseGrade();
    std::cout << b2;
    std::cout << std::endl;
  } catch (std::exception& e) {
    std::cout << e.what() << std::endl << std::endl;
  }
  try {
    Bureaucrat b3("Bla", 150);

    b3.increaseGrade();
    std::cout << b3;
    b3.decreaseGrade();
    std::cout << b3;
    b3.decreaseGrade();
    std::cout << b3;
    std::cout << std::endl;
  } catch (std::exception& e) {
    std::cout << e.what() << std::endl;
  }

  std::cout << std::endl
            << "\033[1;31m ----- Errors ----- \033[0m" << std::endl;
  try {
    std::cout << std::endl;
    std::cout << " ----- Grade -1 Bureaucrat -----" << std::endl;
    Bureaucrat b4("Bli", -1);
  } catch (std::exception& e) {
    std::cout << e.what() << std::endl;
  }

  try {
    std::cout << std::endl;
    std::cout << " ----- Grade 151 Bureaucrat -----" << std::endl;

    Bureaucrat b4("Blou", 151);
  } catch (std::exception& e) {
    std::cout << e.what() << std::endl;
  }
  try {
    std::cout << std::endl;
    std::cout << " ----- Grade 0 Bureaucrat -----" << std::endl;

    Bureaucrat b4("Bla", 0);
  } catch (std::exception& e) {
    std::cout << e.what() << std::endl;
  }
  return 0;
}