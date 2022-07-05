#include "Harl.hpp"

Harl::Harl(void) {}

Harl::~Harl(void) {}

void Harl::harlFilter(std::string level) {
  std::string list[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
  int start = -1;
  for (int i = 0; i < 4; i++) {
    if (level == list[i]) start = i;
  }
  switch (start) {
    case -1:
      std::cout << "[ Probably complaining about insignificant problems ]"
                << std::endl;
      break;
    case 0:
      debug();
      info();
      warning();
      error();
      break;
    case 1:
      info();
      warning();
      error();
      break;
    case 2:
      warning();
      error();
      break;
    case 3:
      error();
      break;
  }
}

void Harl::debug(void) {
  std::cout
      << "[ DEBUG ]" << std::endl
      << "I love having extra bacon for my "
         "7XL-double-cheese-triple-pickle-special- ketchup burger. I really do!"
      << std::endl
      << std::endl;
};

void Harl::info(void) {
  std::cout
      << "[ INFO ]" << std::endl
      << "I cannot believe adding extra bacon costs more money. You didn’t put "
         "enough bacon in my burger! If you did, I wouldn’t be asking for more!"
      << std::endl
      << std::endl;
}

void Harl::warning(void) {
  std::cout
      << "[ WARNING ]" << std::endl
      << "I think I deserve to have some extra bacon for free. I’ve been "
         "coming for years whereas you started working here since last month."
      << std::endl
      << std::endl;
};

void Harl::error(void) {
  std::cout << "[ ERROR ]" << std::endl
            << "This is unacceptable! I want to speak to the manager now."
            << std::endl
            << std::endl;
};