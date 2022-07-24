#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <iostream>
#include <stdexcept>

class Bureaucrat;
#include "Form.hpp"

class Bureaucrat {
 public:
  Bureaucrat();
  Bureaucrat(std::string name, int n);
  Bureaucrat(Bureaucrat const& f);
  Bureaucrat& operator=(Bureaucrat const& f);
  ~Bureaucrat();

  class GradeTooLowException : public std::exception {
   public:
    virtual const char* what() const throw();
  };

  class GradeTooHighException : public std::exception {
   public:
    virtual const char* what() const throw();
  };

  int getGrade() const;
  const std::string& getName() const;
  void setName(const std::string& name) const;

  void increaseGrade();
  void decreaseGrade();

  void signForm(Form& f);

 private:
  const std::string name;
  int grade;
};

std::ostream& operator<<(std::ostream& os, const Bureaucrat& b);

#endif
