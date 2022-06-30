/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeulliot <jeulliot@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/28 15:14:58 by jeulliot          #+#    #+#             */
/*   Updated: 2022/06/29 15:06:15 by jeulliot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

Contact::Contact(void)
{
    this->init();
    return;
}

Contact::~Contact(void)
{
    return;
}

void    Contact::init(void)
{
    this->firstName = "";
    this->lastName = "";
    this->nickname = "";
    this->phoneNumber = "";
    this->darkestSecret = "";
    return;
}

std::string   Contact::trunkedString(std::string str)
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

void    Contact::displayPartial(int i)
{
    std::cout.width(10);
    std::cout << std::right << i + 1 << "|";
    std::cout.width(10);
    std::cout << std::right << trunkedString(this->firstName) << "|";
    std::cout.width(10);
    std::cout << std::right << trunkedString(this->lastName) << "|";
    std::cout.width(10);
    std::cout << std::right << trunkedString(this->nickname) << "|" << std::endl;
}

void    Contact::displayFull(void)
{
    std::cout << std::endl;
    std::cout.width(16);
    std::cout << std::left << "First name: " ;
    std::cout << this->firstName << std::endl;
    std::cout.width(16);
    std::cout << std::left << "Last name: ";
    std::cout << this->lastName << std::endl;
    std::cout.width(16);
    std::cout << std::left << "Nickname: ";
    std::cout << this->nickname << std::endl;
    std::cout.width(16);
    std::cout << std::left << "Phone number: ";
    std::cout << this->phoneNumber << std::endl;
    std::cout.width(16);
    std::cout << std::left << "Darkest secret: ";
    std::cout << this->darkestSecret << std::endl << std::endl;
}

void    Contact::changeInfo(std::string info[5])
{
    this->firstName = info[0];
    this->lastName = info[1];
    this->nickname = info[2];
    this->phoneNumber = info[3];
    this->darkestSecret = info[4];
}

