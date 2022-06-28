/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeulliot <jeulliot@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/28 15:14:58 by jeulliot          #+#    #+#             */
/*   Updated: 2022/06/28 18:12:38 by jeulliot         ###   ########.fr       */
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
    std::cout << "First name : " << this->firstName << std::endl;
    std::cout << "Last name : " << this->lastName << std::endl;
    std::cout << "Nickname : " << this->nickname << std::endl;
    std::cout << "Phone number : " << this->phoneNumber << std::endl;
    std::cout << "Darkest secret : " << this->darkestSecret << std::endl;
}