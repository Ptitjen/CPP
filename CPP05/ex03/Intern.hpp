#ifndef INTERN_HPP
#define INTERN_HPP
#include <iostream>
#include "Form.hpp"

class Intern {
 public:
  Intern();
  Intern(Intern const& f);
  Intern& operator=(Intern const& f);
  virtual ~Intern();

  Form* makeForm(std::string formName, std::string target);
};

#endif
