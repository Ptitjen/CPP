/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeulliot <jeulliot@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/28 15:14:58 by jeulliot          #+#    #+#             */
/*   Updated: 2022/06/28 18:56:06 by jeulliot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "contact.class.hpp"
#include <iostream>

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

void    Contact::display(void)
{
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
    std::cout << this->darkestSecret << std::endl;
}