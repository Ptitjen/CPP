#include "PhoneBook.hpp"

#include "Contact.hpp"

PhoneBook::PhoneBook(void) { this->nbOfContact = 0; }

PhoneBook::~PhoneBook(void) {
  std::cout << std::endl;
  std::cout
      << "\U0001F47B The program quits and the contacts are lost forever!";
  std::cout << std::endl << std::endl;
}

std::string PhoneBook::askField(const std::string& field) {
  std::string cmd;
  std::cout << field << std::endl;
  getline(std::cin, cmd);
  return (cmd);
}

void PhoneBook::displayList(void) {
  int i = 0;
  std::cout << std::endl;
  std::cout.width(10);
  std::cout << std::right << "Index"
            << "|";
  std::cout.width(10);
  std::cout << std::right << "First name"
            << "|";
  std::cout.width(10);
  std::cout << std::right << "Last name"
            << "|";
  std::cout.width(10);
  std::cout << std::right << "Nickname"
            << "|" << std::endl;
  std::cout.width(44);
  std::cout << std::cout.fill('-') << std::endl;
  ;
  std::cout.fill(' ');
  while (i < this->nbOfContact && i < 8) {
    this->contactArray[i].displayPartial(i);
    i++;
  }
  std::cout << std::endl;
}

int PhoneBook::searchInList(std::string cmd) {
  if (cmd[1] == '\0') {
    int index = atoi(cmd.c_str());
    if (index < 1 || index > 8 || index > nbOfContact) return (0);

    this->contactArray[index - 1].displayFull();
    return (1);
  }
  return (0);
}

void PhoneBook::searchContact(void) {
  if (this->nbOfContact == 0) {
    std::cout << std::endl;
    std::cout << "\U0001F6AB You don't have any contact yet..." << std::endl
              << std::endl;
  } else {
    this->displayList();
    std::string ctc;
    ctc = this->askField("Enter the index of the contact you want to display:");
    if (this->searchInList(ctc) == 0)
      std::cout << std::endl
                << "\U0001F6AB This contact doesn't exist." << std::endl
                << std::endl;
  }
}

void PhoneBook::addContact() {
  std::string tmp[5] = {"", "", "", "", ""};

  std::cout << std::endl;
  if (this->nbOfContact >= 8)
    std::cout << "\U0001F635 You already have 8 contacts. Erasing your oldest "
                 "contact."
              << std::endl
              << std::endl;

  while (tmp[0].empty()) tmp[0] = PhoneBook::askField("First name:");
  while (tmp[1].empty()) tmp[1] = PhoneBook::askField("Last name:");
  while (tmp[2].empty()) tmp[2] = PhoneBook::askField("Nickname:");
  while (tmp[3].empty()) tmp[3] = PhoneBook::askField("Phone number:");
  while (tmp[4].empty()) tmp[4] = PhoneBook::askField("Darkest secret:");
  this->contactArray[this->nbOfContact % 8].changeInfo(tmp);
  this->nbOfContact++;
  std::cout << std::endl;
}