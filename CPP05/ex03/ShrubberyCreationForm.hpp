#ifndef SHRUBBERYCREATIONFORM_HPP
#define SHRUBBERYCREATIONFORM_HPP
#include "Form.hpp"

class ShrubberyCreationForm : public Form {
 public:
  ShrubberyCreationForm();
  ShrubberyCreationForm(std::string target, std::string name);
  ShrubberyCreationForm(ShrubberyCreationForm const& f);
  ShrubberyCreationForm& operator=(ShrubberyCreationForm const& f);
  virtual ~ShrubberyCreationForm();
  virtual void action(void) const;

 private:
  std::string target;
};

#endif
