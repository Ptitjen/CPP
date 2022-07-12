#ifndef PRESIDENTIALPARDONFORM_HPP
#define PRESIDENTIALPARDONFORM_HPP
#include "Form.hpp"

class PresidentialPardonForm : public Form {
 public:
  PresidentialPardonForm();
  PresidentialPardonForm(std::string target, std::string name);
  PresidentialPardonForm(PresidentialPardonForm const& f);
  PresidentialPardonForm& operator=(PresidentialPardonForm const& f);
  virtual ~PresidentialPardonForm();

  virtual void action(void) const;

 private:
  std::string target;
};

#endif
