#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <iostream>
#include <stdexcept>

class Bureaucrat {
 public:
  Bureaucrat(const std::string& name, int n);
  Bureaucrat(Bureaucrat const& f);
  Bureaucrat& operator=(Bureaucrat const& f);
  ~Bureaucrat();

  int getGrade() const;
  const std::string& getName() const;
  void setName(const std::string& name) const;

  void increaseGrade();
  void decreaseGrade();

 private:
  const std::string name;
  int grade;
};

std::ostream& operator<<(std::ostream& os, const Bureaucrat& b);

#endif
