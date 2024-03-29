#include <exception>
#include <iostream>

#include "Intern.hpp"

int main() {
  {
    srand(time(NULL));
    
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

    delete rrf;
    delete rrf2;
    delete rrf3;
  }

  return 0;
}