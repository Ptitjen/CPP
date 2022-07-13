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

Form* Intern::makeForm(std::string formName, std::string target) {
  std::string nameArray[3] = {"schrubbery creation", "robotomy request",
                              "presidential pardon form"};
  int index = -1;
  for (int i = 0; i < 3; i++)
    if (formName == nameArray[i])
      index = i;
  index == -1
      ? (std::cout << "This form does not exist." << std::endl)
      : std::cout << "Intern creates " << formName << " form." << std::endl;
  switch (index) {
    case 0: {
      ShrubberyCreationForm* f =
          new ShrubberyCreationForm(target, "Shrub Form");
      return f;
    }
    case 1: {
      RobotomyRequestForm* f = new RobotomyRequestForm(target, "Robot Form");
      return f;
    }
    case 2: {
      PresidentialPardonForm* f =
          new PresidentialPardonForm(target, "Robot Form");
      return f;
    }
    default:
      return NULL;
  }
};
