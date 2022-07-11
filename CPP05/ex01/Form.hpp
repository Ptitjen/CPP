#ifndef FORM_HPP
#define FORM_HPP

#include <iostream>
#include <stdexcept>
#include "Bureaucrat.hpp"

class Form {
 public:
  Form();
  Form(Form const& f);
  Form& operator=(Form const& f);
  ~Form();

  const int getSignGrade() const;
  const int getExecGrade() const;
  std::string getName() const;
  bool getSigned() const;

  void setSignGrade(int grade);
  void setExecGrade(int grade);
  void setName(std::string name);
  void setSign(bool sign);

  void beSigned(Bureaucrat b);

 private:
  const std::string name;
  bool sign;
  const int signGrade;
  const int execGrade;
};

std::ostream& operator<<(std::ostream& os, const Form& b);

#endif
