#include <exception>
#include <iostream>
#include "Bureaucrat.hpp"

int main() {
  {
    std::cout << std::endl << " ----- Real Bureaucrats -----" << std::endl;
    Bureaucrat b1("Blou", 20);
    b1.increaseGrade();
    std::cout << b1;
    b1.decreaseGrade();
    std::cout << b1;
    std::cout << std::endl;
    Bureaucrat b2("Bli", 1);
    b2.increaseGrade();
    std::cout << b2;
    b2.decreaseGrade();
    std::cout << b2;
    std::cout << std::endl;
    Bureaucrat b3("Bla", 150);
    b3.decreaseGrade();
    b3.increaseGrade();
    std::cout << b3;
    b3.decreaseGrade();
    std::cout << b3;
    std::cout << std::endl;
  }
  std::cout << std::endl << " ----- Wrong Bureaucrats -----" << std::endl;
  std::cout << std::endl;
  {
    std::cout << std::endl;
    std::cout << " ----- Grade -1 Bureaucrat -----" << std::endl;

    Bureaucrat b4("Blibla", -1);
  }
  {
    std::cout << std::endl;
    std::cout << " ----- Grade 151 Bureaucrat -----" << std::endl;

    Bureaucrat b4("Bloublou", 151);
  }

  {
    std::cout << std::endl;
    std::cout << " ----- Grade 0 Bureaucrat -----" << std::endl;

    Bureaucrat b4("Bliblablou", 0);
  }
  return 0;
}