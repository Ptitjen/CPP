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

  typedef Form* (*CallConstructor)(std::string);
  template <class T>
  static Form* callConstructor(std::string target) {
    return new T(target);
  }
  static FormConstructor formConstructors[3];

  Form* makeForm(std::string formName, std::string target) const;
};

#endif
