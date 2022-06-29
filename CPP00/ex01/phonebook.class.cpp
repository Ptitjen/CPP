/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.class.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeulliot <jeulliot@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/28 15:15:02 by jeulliot          #+#    #+#             */
/*   Updated: 2022/06/29 14:37:49 by jeulliot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.class.hpp"
#include "contact.class.hpp"

Phonebook::Phonebook(void){
    this->nbOfContact = 0;
    return;
}

Phonebook::~Phonebook(void){
    std::cout << std::endl;
    std::cout << "\U0001F47B The program quits and the contacts are lost forever!";
    std::cout << std::endl << std::endl;
    return;
}

std::string   Phonebook::askField(std::string field)
{
    std::string cmd = "";
    std::cout << field << std::endl;
    std::cin >> cmd;
    return (cmd);
}

void    Phonebook::displayList(void)
{
    int i = 0;
    std::cout << std::endl;
    std::cout.width(10);
    std::cout << std::right << "Index" << "|";
    std::cout.width(10);
    std::cout << std::right << "First name" << "|";
    std::cout.width(10);
    std::cout << std::right << "Last name" << "|";
    std::cout.width(10);
    std::cout << std::right << "Nickname" << "|" << std::endl;
    std::cout.width(44);
    std::cout << std::cout.fill('-') << std::endl;;
    std::cout.fill(' ');
    while (i < this->nbOfContact)
    {
        this->contactArray[i].displayPartial(i);
        i ++;
    }
    std::cout << std::endl;
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
            this->contactArray[index - 1].displayFull();
            return (1);
        }
    }
    return (0);
}   

void    Phonebook::searchContact(void)
{
    if (this->nbOfContact == 0)
    {
        std::cout << std::endl;
        std::cout << "\U0001F6AB You don't have any contact yet..." << std::endl << std::endl;
    }
    else
    {
        this->displayList();
        std::string ctc = "";
        ctc = this->askField("Enter the index of the contact you want to display:");
        if (this->searchInList(ctc) == 0)
            std::cout << std::endl << "\U0001F6AB This contact doesn't exist." << std::endl << std::endl;
    }
    return;
}

void    Phonebook::eraseContact()
{
    int i = 0;
    while (i < this->nbOfContact - 1)
    {
        this->contactArray[i] = this->contactArray[i + 1];
        i++;
    }
    this->contactArray[i].init();
    std::cout << "\U0001F635 You already have 8 contacts. Erasing your oldest contact." << std::endl << std::endl;
}

void    Phonebook::addContact()//changer
{
    std::string tmp[5] = {"", "", "", "", ""};

    std::cout << std::endl;
    if (this->nbOfContact == 8)
    {
        this->eraseContact(); 
        this->nbOfContact --;
    }
    while (tmp[0] == "")
        tmp[0] = Phonebook::askField("First name:");
    while (tmp[1] == "")
        tmp[1] = Phonebook::askField("Last name:");
    while (tmp[2] == "")
        tmp[2] = Phonebook::askField("Nickname:");
    while (tmp[3] == "")
        tmp[3] = Phonebook::askField("Phone number:");
    while (tmp[4] == "")
        tmp[4] = Phonebook::askField("Darkest secret:");
    this->contactArray[this->nbOfContact].changeInfo(tmp);
    if (this->nbOfContact != 8)
        this->nbOfContact ++;
    std::cout << std::endl;
    return;
}