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
  try {
    if (n > 150)
      throw Bureaucrat::GradeTooLowException();
    if (n <= 0)
      throw Bureaucrat::GradeTooHighException();
    const_cast<std::string&>(this->name) = name;
    grade = n;
  } catch (Bureaucrat::GradeTooLowException& e) {
    std::cout << e.what() << std::endl;
  } catch (Bureaucrat::GradeTooHighException& e) {
    std::cout << e.what() << std::endl;
  }
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

Bureaucrat::~Bureaucrat() {
  std::cout << "Bureaucrat Destructor called for " << name << std::endl;
};

const char* Bureaucrat::GradeTooHighException::what() const throw() {
  return ("Bureaucrat::Exception: Grade too low.");
}

const char* Bureaucrat::GradeTooLowException::what() const throw() {
  return ("Bureaucrat::Exception: Grade too low.");
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
  try {
    if (getGrade() == 150) {
      std::cout << "Cannot decrease " << name << " grade." << std::endl;
      throw std::invalid_argument("Bureaucrat::GradeTooHighException");
    }
    grade++;
    std::cout << "Trying to decrease " << name << " to grade " << grade << "..."
              << std::endl;

  } catch (std::exception& e) {
    std::cout << e.what() << std::endl;
  }
}

void Bureaucrat::increaseGrade() {
  try {
    if (getGrade() == 1) {
      std::cout << "Cannot increase " << name << " grade." << std::endl;
      throw std::invalid_argument("Bureaucrat::GradeTooHighException");
    }
    grade--;
    std::cout << "Trying to increase " << name << " to grade " << grade << "..."
              << std::endl;

  } catch (std::exception& e) {
    std::cout << e.what() << std::endl;
  }
}
