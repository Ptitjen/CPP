/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeulliot <jeulliot@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/28 15:20:11 by jeulliot          #+#    #+#             */
/*   Updated: 2022/07/05 14:26:55 by jeulliot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_H
#define PHONEBOOK_H

#include <iostream>

#include "Contact.hpp"

class PhoneBook {
 public:
  PhoneBook(void);
  ~PhoneBook(void);
  void searchContact(void);
  void addContact(void);

 private:
  Contact contactArray[8];
  int nbOfContact;

  int searchInList(std::string cmd);
  void displayList(void);
  void eraseContact(void);
  static std::string askField(const std::string& field);
};
#endif