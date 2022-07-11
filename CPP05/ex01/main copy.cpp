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
  std::cout << std::endl << " ----- Copy Bureaucrats -----" << std::endl;

  {
    std::cout << "Original : Grade 15 Bureaucrat -----" << std::endl
              << std::endl;
    std::cout << " ----- 1.Copy with copy constructor -----" << std::endl;
    Bureaucrat b11("Bla", 15);
    std::cout << "Original: " << b11;
    Bureaucrat b12 = b11;
    std::cout << "Copy: " << b12;
    b12.increaseGrade();
    std::cout << "Copy: " << b12;

    std::cout << "Original: " << b11 << std::endl;
    std::cout << " ----- 2.Copy with = operator -----" << std::endl;
    Bureaucrat b13(b11);
    std::cout << b13;
    b13.decreaseGrade();
    std::cout << "Copy: " << b13;
    std::cout << "Original: " << b11;
  }
  std::cout << std::endl << " ----- Wrong Bureaucrats ----- " << std::endl;

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