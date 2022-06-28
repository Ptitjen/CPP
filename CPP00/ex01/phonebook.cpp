/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeulliot <jeulliot@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/28 15:15:02 by jeulliot          #+#    #+#             */
/*   Updated: 2022/06/28 18:38:50 by jeulliot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.class.hpp"
#include "contact.class.hpp"

Phonebook::Phonebook(void){
    this->nbOfContact = 0;
    return;
}

Phonebook::~Phonebook(void){
    std::cout << "Destroying your phonebook" << std::endl;
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

void    Phonebook::displayList(void) //a faire
{
    int i = 0;

    while (i < this->nbOfContact)
    {
        std::cout.width(10);
        std::cout << i + 1 << "|";
        std::cout.width(10);
        std::cout << trunkedString(this->contactArray[i].firstName) << "|";
        std::cout.width(10);
        std::cout << trunkedString(this->contactArray[i].lastName) << "|";
        std::cout.width(10);
        std::cout << trunkedString(this->contactArray[i].nickname) << std :: endl;
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
    if (this->nbOfContact == 7)
        this->contactArray[7].init();
    while (this->contactArray[nbOfContact].firstName == "")
        this->contactArray[nbOfContact].firstName = Phonebook::askField("First name:");
    while (this->contactArray[nbOfContact].lastName == "")
        this->contactArray[nbOfContact].lastName = Phonebook::askField("Last name:");
    while (this->contactArray[nbOfContact].nickname == "")
        this->contactArray[nbOfContact].nickname = Phonebook::askField("Nickname:");
    while (this->contactArray[nbOfContact].phoneNumber == "")
        this->contactArray[nbOfContact].phoneNumber = Phonebook::askField("Phone number:");
    while (this->contactArray[nbOfContact].darkestSecret == "")
        this->contactArray[nbOfContact].darkestSecret = Phonebook::askField("Darkest secret:");
    if (this->nbOfContact != 7)
        this->nbOfContact ++;
    return;
}