#ifndef ROBOTOMYREQUESTFORM_HPP
#define ROBOTOMYREQUESTFORM_HPP
#include "Form.hpp"

class RobotomyRequestForm : public Form {
 public:
  RobotomyRequestForm();
  RobotomyRequestForm(std::string target, std::string name);
  RobotomyRequestForm(RobotomyRequestForm const& f);
  RobotomyRequestForm& operator=(RobotomyRequestForm const& f);
  virtual ~RobotomyRequestForm();
  virtual void action(void) const;

 private:
  std::string target;
};

#endif
