#include "Form.hpp"

std::ostream& operator<<(std::ostream& os, const Form& b) {
  os << b.getName() << std::endl;
  return os;
}

Form::Form() : sign(false), signGrade(50), execGrade(50) {
  std::cout << "Form Default constructor called" << std::endl;
  setName(name);
  try {
    // if (n > 150) {
    //   throw std::invalid_argument("Form::GradeTooLowException");
    // }
    // if (n <= 0) {
    //   throw std::invalid_argument("Form::GradeTooHighException");
    // }

  } catch (std::exception& e) {
    std::cout << e.what() << std::endl;
  }
}

Form::Form(Form const& f) {
  std::cout << "Form copy constructor called for " << f << std::endl;
  setName(f.getName());
  setSignGrade(f.getSignGrade());
  setExecGrade(f.getSignGrade());
  sign = f.getSigned();
  setName(f.getName());
}

Form& Form::operator=(Form const& f) {
  if (&f == this)
    return (*this);
  std::cout << "Form copy constructor called for " << f << std::endl;
  setName(f.getName());
  setSignGrade(f.getSignGrade());
  setExecGrade(f.getSignGrade());
  sign = f.getSigned();
  return (*this);
};

Form::~Form() {
  std::cout << "Form Destructor called for " << name << std::endl;
};

void Form::setSignGrade(int grade) {
  signGrade = grade;
};
void Form::setExecGrade(int grade){};
void Form::setName(std::string name){

};
void Form::setSign(bool sign){};
// std::string Bureaucrat::getName(void) const {
//   return (name);
// }

// void Bureaucrat::setName(std::string newName) const {
//   newName = name;
// }

// int Bureaucrat::getGrade(void) const {
//   return (grade);
// }

// void Bureaucrat::decreaseGrade() {
//   try {
//     if (getGrade() == 150) {
//       std::cout << "Cannot decrease " << name << " grade." << std::endl;
//       throw std::invalid_argument("Bureaucrat::GradeTooHighException");
//     }
//     grade++;
//     std::cout << "Trying to decrease " << name << " to grade " << grade <<
//     "..."
//               << std::endl;

//   } catch (std::exception& e) {
//     std::cout << e.what() << std::endl;
//   }
// }

// void Bureaucrat::increaseGrade() {
//   try {
//     if (getGrade() == 1) {
//       std::cout << "Cannot increase " << name << " grade." << std::endl;
//       throw std::invalid_argument("Bureaucrat::GradeTooHighException");
//     }
//     grade--;
//     std::cout << "Trying to increase " << name << " to grade " << grade <<
//     "..."
//               << std::endl;

//   } catch (std::exception& e) {
//     std::cout << e.what() << std::endl;
//   }
// }
