#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm() : Form("", 25, 5) {
  target = "";
}

PresidentialPardonForm::PresidentialPardonForm(std::string target,
                                               std::string name)
    : Form(name, 25, 5) {
  std::cout << "PresidentialPardonForm Default constructor called" << std::endl;
  this->target = target;
}

PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm const& f)
    : Form(f.getName(), f.getSignGrade(), f.getExecGrade()) {
  std::cout << "PresidentialPardonForm Copy constructor called" << std::endl;
  target = f.target;  // pas sur - set get?
}

PresidentialPardonForm& PresidentialPardonForm::operator=(
    PresidentialPardonForm const& f) {
  if (&f == this)
    return (*this);
  std::cout << "PresidentialPardonForm operator = called" << std::endl;
  setName(f.getName());
  setSignGrade(f.getSignGrade());
  setExecGrade(f.getSignGrade());
  setSign(f.getSigned());
  target = f.target;  // pas sur
  return (*this);
}
PresidentialPardonForm::~PresidentialPardonForm() {
  std::cout << "PresidentialPardonForm destructor called" << std::endl;
}

void PresidentialPardonForm::action() const {
  std::cout << target << " was forgiven by Zaphod Beeblebrox." << std::endl;
}