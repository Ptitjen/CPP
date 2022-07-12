#ifndef FORM_HPP
#define FORM_HPP

#include <iostream>
#include <stdexcept>

class Form;
#include "Bureaucrat.hpp"

class Form {
 public:
  Form(std::string name, int signGrade, int execGrade);
  Form(Form const& f);
  Form& operator=(Form const& f);
  ~Form();

  class GradeTooLowException : public std::exception {
   public:
    virtual const char* what() const throw() {
      return ("Form::Exception : Grade too low.");
    }
  };

  class GradeTooHighException : public std::exception {
   public:
    virtual const char* what() const throw() {
      return ("Form::Exception : Grade too high.");
    }
  };

  const int& getSignGrade() const;
  const int& getExecGrade() const;
  const std::string& getName() const;
  bool getSigned() const;

  void setSignGrade(const int& grade);
  void setExecGrade(const int& grade);
  void setName(const std::string& name);
  void setSign(bool sign);
  bool beSigned(Bureaucrat& b);

 private:
  const std::string name;
  bool sign;
  const int signGrade;
  const int execGrade;
};

std::ostream& operator<<(std::ostream& os, const Form& f);

#endif
