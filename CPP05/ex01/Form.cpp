#include "Form.hpp"

std::ostream& operator<<(std::ostream& os, const Form& f) {
  os << "Form " << f.getName()
     << " - status: " << (f.getSigned() ? "signed" : " not signed")
     << " - signGrade: " << f.getSignGrade()
     << " - execGrade: " << f.getExecGrade() << std::endl;
  return os;
}

Form::Form() : signGrade(150), execGrade(150) {
  setName("");
}

Form::Form(std::string name, int signGrade, int execGrade)
    : name(name), sign(false), signGrade(signGrade), execGrade(execGrade) {
  std::cout << "Form Default constructor called with sign grade " << signGrade
            << " and exec grade " << execGrade << std::endl;

  if (signGrade > 150 || execGrade > 150)
    throw(Form::GradeTooLowException());
  if (signGrade <= 0 || execGrade <= 0)
    throw(Form::GradeTooHighException());
}

Form::Form(Form const& f)
    : name(f.getName()),
      sign(f.getSigned()),
      signGrade(f.getSignGrade()),
      execGrade(f.getExecGrade()) {
  std::cout << "Form copy constructor called." << std::endl;
}

Form& Form::operator=(Form const& f) {
  if (&f == this)
    return (*this);
  std::cout << "Form copy constructor called." << std::endl;
  setName(f.getName());
  setSignGrade(f.getSignGrade());
  setExecGrade(f.getSignGrade());
  sign = f.getSigned();
  return (*this);
};

Form::~Form() {
  std::cout << "Form Destructor called." << std::endl;
};

const char* Form::GradeTooHighException::what() const throw() {
  return ("\033[31mGrade too high.\033[0m");
}

const char* Form::GradeTooLowException::what() const throw() {
  return ("\033[31mGrade too low.\033[0m");
}

bool Form::beSigned(Bureaucrat& b) {
  if (b.getGrade() > signGrade) {
    return false;
  }
  if (this->sign) {
    return false;
  }
  sign = true;
  return true;
}

const int& Form::getSignGrade() const {
  return (signGrade);
};

const int& Form::getExecGrade() const {
  return (execGrade);
};

const std::string& Form::getName() const {
  return (name);
};

bool Form::getSigned() const {
  return (sign);
};

void Form::setSignGrade(const int& newSignGrade) {
  const_cast<int&>(signGrade) = newSignGrade;
};
void Form::setExecGrade(const int& newExecGrade) {
  const_cast<int&>(execGrade) = newExecGrade;
};

void Form::setName(const std::string& newName) {
  const_cast<std::string&>(name) = newName;
};

void Form::setSign(bool newSign) {
  sign = newSign;
};
