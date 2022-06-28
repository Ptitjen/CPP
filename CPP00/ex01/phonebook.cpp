/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeulliot <jeulliot@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/28 15:15:02 by jeulliot          #+#    #+#             */
/*   Updated: 2022/06/28 19:07:41 by jeulliot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.class.hpp"
#include "contact.class.hpp"

Phonebook::Phonebook(void){
    this->nbOfContact = 0;
    return;
}

Phonebook::~Phonebook(void){
    std::cout << "The program quits and the contacts are lost forever!" << std::endl;
    return;
}

std::string   Phonebook::askField(std::string field)
{
    std::string cmd = "";
    std::cout << field << std::endl;
    std::cin >> cmd;
    return (cmd);
}

std::string   Phonebook::trunkedString(std::string str)
{
    std::string trunked;

    if (str.length() <= 10)
        return (str);
    else 
    {
        trunked = str.substr(0,9);
        trunked.append (1, '.');
        return (trunked);
    }    
}

void    Phonebook::displayList(void)
{
    int i = 0;

    std::cout.width(10);
    std::cout << "Index" << "|";
    std::cout.width(10);
    std::cout << "First name" << "|";
    std::cout.width(10);
    std::cout << "Last name" << "|";
    std::cout.width(10);
    std::cout << "Nickname" << "|" << std::endl;
    std::cout.width(44);
    std::cout << std::cout.fill('-') << std::endl;;
    std::cout.fill(' ');
    while (i < this->nbOfContact)
    {
        std::cout.width(10);
        std::cout << i + 1 << "|";
        std::cout.width(10);
        std::cout << trunkedString(this->contactArray[i].firstName) << "|";
        std::cout.width(10);
        std::cout << trunkedString(this->contactArray[i].lastName) << "|";
        std::cout.width(10);
        std::cout << trunkedString(this->contactArray[i].nickname) << "|" << std::endl;
        i ++;
    }
}

int     Phonebook::searchInList(std::string cmd)
{
    if (cmd[1] == '\0')
    {
        int index = cmd[0] - 48;
        if (index < 1 || index > nbOfContact)
            return (0);
        else 
        {
            this->contactArray[index - 1].display();
            return (1);
        }
    }
    return (0);
}   

void    Phonebook::searchContact(void)
{
    if (this->nbOfContact == 0)
        std::cout << "You don't have any contact yet" << std::endl;
    else
    {
        this->displayList();
        std::string ctc = "";
        ctc = this->askField("Enter the index of the contact you want to display:");
        if (this->searchInList(ctc) == 0)
            std::cout << "This contact doesn't exist" << std::endl;
    }
    return;
}

void    Phonebook::addContact()
{
    int contactToSet = this->nbOfContact;

    if (this->nbOfContact == 8)
    {
        this->contactArray[0].init();
        contactToSet = 0;
        std::cout << "You already have 8 contacts. Erasing your oldest contact" << std::endl;
    }
    while (this->contactArray[contactToSet].firstName == "")
        this->contactArray[contactToSet].firstName = Phonebook::askField("First name:");
    while (this->contactArray[contactToSet].lastName == "")
        this->contactArray[contactToSet].lastName = Phonebook::askField("Last name:");
    while (this->contactArray[contactToSet].nickname == "")
        this->contactArray[contactToSet].nickname = Phonebook::askField("Nickname:");
    while (this->contactArray[contactToSet].phoneNumber == "")
        this->contactArray[contactToSet].phoneNumber = Phonebook::askField("Phone number:");
    while (this->contactArray[contactToSet].darkestSecret == "")
        this->contactArray[contactToSet].darkestSecret = Phonebook::askField("Darkest secret:");
    if (this->nbOfContact != 8)
        this->nbOfContact ++;
    return;
}