#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm() : Form("", 72, 45) {
  target = "";
}

RobotomyRequestForm::RobotomyRequestForm(std::string target, std::string name)
    : Form(name, 72, 45) {
  std::cout << "RobotomyRequestForm Default constructor called" << std::endl;
  this->target = target;
}

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm const& f)
    : Form(f.getName(), f.getSignGrade(), f.getExecGrade()) {
  std::cout << "RobotomyRequestForm Copy constructor called" << std::endl;
  this->target = f.target;
}

RobotomyRequestForm& RobotomyRequestForm::operator=(
    RobotomyRequestForm const& f) {
  if (&f == this)
    return (*this);
  std::cout << "RobotomyRequestForm operator = called" << std::endl;
  setName(f.getName());
  setSignGrade(f.getSignGrade());
  setExecGrade(f.getSignGrade());
  setSign(f.getSigned());
  this->target = f.target;
  return (*this);
}
RobotomyRequestForm::~RobotomyRequestForm() {
  std::cout << "RobotomyRequestForm destructor called" << std::endl;
}

void RobotomyRequestForm::action() const {
  std::cout << "*** Doing drill sounds ***" << std::endl;
  int n = std::rand();
  n % 2 == 0 ? (std::cout << target << " has been robotomized." << std::endl)
             : (std::cout << target << " robotomization failed." << std::endl);
}