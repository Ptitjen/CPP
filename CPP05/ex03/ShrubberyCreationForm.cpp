#include "ShrubberyCreationForm.hpp"
#include <fstream>

ShrubberyCreationForm::ShrubberyCreationForm() : Form("", 145, 137) {
  target = "";
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string target,
                                             std::string name)
    : Form(name, 145, 137) {
  std::cout << "ShrubberyCreationForm Default constructor called" << std::endl;
  this->target = target;
}

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm const& f)
    : Form(f.getName(), f.getSignGrade(), f.getExecGrade()) {
  std::cout << "ShrubberyCreationForm Copy constructor called" << std::endl;
  this->target = f.target;
}

ShrubberyCreationForm& ShrubberyCreationForm::operator=(
    ShrubberyCreationForm const& f) {
  if (&f == this)
    return (*this);
  std::cout << "ShrubberyCreationForm operator = called" << std::endl;
  setName(f.getName());
  setSignGrade(f.getSignGrade());
  setExecGrade(f.getSignGrade());
  setSign(f.getSigned());
  this->target = f.target;
  return (*this);
}
ShrubberyCreationForm::~ShrubberyCreationForm() {
  std::cout << "ShrubberyCreationForm destructor called" << std::endl;
}

void ShrubberyCreationForm::action() const {
  std::ofstream ofs(target);
  if (ofs.is_open()) {
    ofs << "               ,@@@@@@@,              " << std::endl
        << "       ,,,.   ,@@@@@@/@@,  .oo8888o.  " << std::endl
        << "    ,&%%&%&&%,@@@@@/@@@@@@,8888\\88/8o " << std::endl
        << "   ,%&\\%&&%&&%,@@@\\@@@/@@@88\\88888/88'" << std::endl
        << "   %&&%&%&/%&&%@@\\@@/ /@@@88888\\88888'" << std::endl
        << "   %&&%/ %&%%&&@@\\ V /@@' `88\\8 `/88' " << std::endl
        << "   `&%\\ ` /%&'    |.|        \\ '|8'   " << std::endl
        << "       |o|        | |         | |     " << std::endl
        << "       |.|        | |         | |     " << std::endl
        << " \\/ ._\\//_/__/  ,\\_//__\\/.  \\_//__/_" << std::endl;
    ofs.close();
  } else {
    std::cout << "Error creating target file" << std::endl;
  }
}