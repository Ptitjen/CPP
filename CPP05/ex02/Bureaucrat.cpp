#include "Bureaucrat.hpp"

std::ostream& operator<<(std::ostream& os, const Bureaucrat& b) {
  os << b.getName() << ", bureaucrat grade " << b.getGrade() << "."
     << std::endl;
  return os;
}

Bureaucrat::Bureaucrat() {
  setName("");
  grade = 150;
}

Bureaucrat::Bureaucrat(std::string name, int n) {
  std::cout << "Bureaucrat Default constructor called for " << name
            << " with grade " << n << std::endl;

  if (n > 150)
    throw Bureaucrat::GradeTooLowException();
  if (n <= 0)
    throw Bureaucrat::GradeTooHighException();
  const_cast<std::string&>(this->name) = name;
  grade = n;
};

Bureaucrat::Bureaucrat(Bureaucrat const& f) : name(f.getName()) {
  std::cout << "Bureaucrat copy constructor called for " << f;
  grade = f.getGrade();
}

Bureaucrat& Bureaucrat::operator=(Bureaucrat const& f) {
  if (&f == this)
    return (*this);
  std::cout << "Bureaucrat = assignment called for " << f << std::endl;
  setName(f.getName());
  grade = f.getGrade();
  return (*this);
};

Bureaucrat::~Bureaucrat(){

};

const char* Bureaucrat::GradeTooHighException::what() const throw() {
  return ("\033[31mGrade too high.\033[0m");
}

const char* Bureaucrat::GradeTooLowException::what() const throw() {
  return ("\033[31mGrade too low.\033[0m");
}

const std::string& Bureaucrat::getName(void) const {
  return (name);
}
void Bureaucrat::setName(const std::string& newName) const {
  const_cast<std::string&>(name) = newName;
}
int Bureaucrat::getGrade(void) const {
  return (grade);
}

void Bureaucrat::decreaseGrade() {
  if (getGrade() == 150) {
    std::cout << "Cannot decrease " << name << "." << std::endl;
    throw Bureaucrat::GradeTooLowException();
  }
  grade++;
  std::cout << "Decreasing " << name << " to grade " << grade << "..."
            << std::endl;
}

void Bureaucrat::increaseGrade() {
  if (getGrade() == 1) {
    std::cout << "Cannot increase " << name << "." << std::endl;
    throw Bureaucrat::GradeTooHighException();
  }
  grade--;
  std::cout << "Increasing " << name << " to grade " << grade << "..."
            << std::endl;
}

void Bureaucrat::signForm(Form& f) {
  if (f.beSigned(*this))
    std::cout << name << " signed " << f.getName() << "." << std::endl;
  else if (f.getSigned())
    std::cout << name << " couldn't sign " << f.getName()
              << " because it's already signed." << std::endl;
  else {
    std::cout << name << " couldn't sign " << f.getName()
              << " because his grade is too low." << std::endl;
    throw Form::GradeTooLowException();
  }
}

void Bureaucrat::executeForm(Form const& form) {
  if (form.execute(*this))
    std::cout << name << " executed " << form.getName() << "." << std::endl;
  else if (!form.getSigned())
    std::cout << name << " couldn't execute " << form.getName()
              << " because the form is not signed." << std::endl;
  else {
    std::cout << name << " couldn't execute " << form.getName()
              << " because his grade is too low." << std::endl;
    throw(Form::GradeTooLowException());
  }
}