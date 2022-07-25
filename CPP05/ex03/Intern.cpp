#include "Intern.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

Intern::Intern() {
  std::cout << "Intern constructor called" << std::endl;
}

Intern::Intern(Intern const& f) {
  std::cout << "Intern copy constructor called" << std::endl;
  (void)f;
}

Intern& Intern::operator=(Intern const& f) {
  std::cout << "Intern assignment operator called" << std::endl;
  if (&f == this)
    return (*this);

  return (*this);
};

Intern::~Intern() {
  std::cout << "Intern Destructor called " << std::endl;
};

Intern::CallConstructor Intern::formConstructors[3] = {
    Intern::callConstructor<RobotomyRequestForm>,
    Intern::callConstructor<ShrubberyCreationForm>,
    Intern::callConstructor<PresidentialPardonForm>};

Form* Intern::makeForm(std::string formName, std::string target) const {
  std::string nameArray[3] = {"schrubbery creation", "robotomy request",
                              "presidential pardon"};
  Form* new_form = NULL;
  for (int i = 0; i < 3; ++i) {
    if (nameArray[i] == formName) {
      new_form = formConstructors[i](target);
    }
  }
  if (new_form != 0) {
    std::cout << "Intern creates " << formName << std::endl;
    return new_form;
  }
  std::cout << "Invalid form name." << std::endl;
  return NULL;
};
