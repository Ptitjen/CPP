#include <exception>
#include <iostream>

#include "Intern.hpp"

int main() {
  {
    srand(time(NULL));
    std::cout << std::endl
              << "\033[1;33m----- Creating Forms -----\033[0m" << std::endl;
    Intern someRandomIntern;

    Form* rrf2;
    rrf2 = someRandomIntern.makeForm("schrubbery creation", "Bender");
    std::cout << *rrf2 << std::endl;
    Form* rrf;
    rrf = someRandomIntern.makeForm("robotomy request", "Bender");
    std::cout << *rrf << std::endl;

    Form* rrf3;
    rrf3 = someRandomIntern.makeForm("presidential pardon form", "Bender");
    std::cout << *rrf3 << std::endl;
    std::cout << std::endl
              << "\033[1;33m----- Creating Bureaucrats -----\033[0m"
              << std::endl;
    Bureaucrat b1("Middle one", 70);
    std::cout << b1 << std::endl;
    Bureaucrat b2("Chief", 1);
    std::cout << b2 << std::endl;
    std::cout << std::endl
              << "\033[1;33m----- Signing Forms -----\033[0m" << std::endl;
    std::cout << std::endl
              << "\033[1;33m----- Executing Forms -----\033[0m" << std::endl;

    b2.signForm(*rrf2);
    b2.signForm(*rrf);
    b2.signForm(*rrf3);
    b1.executeForm(*rrf3);
    b2.executeForm(*rrf3);
    b2.executeForm(*rrf);
    b2.executeForm(*rrf2);
    delete rrf;
    delete rrf2;
    delete rrf3;
  }

  return 0;
}