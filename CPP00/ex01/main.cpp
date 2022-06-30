/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeulliot <jeulliot@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/24 16:13:35 by jeulliot          #+#    #+#             */
/*   Updated: 2022/06/30 14:39:17 by jeulliot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <limits>
#include "Contact.hpp"
#include "Phonebook.hpp"

int main (void) 
{
    Phonebook p;

    std::string cmd;

    std::cout << std::endl;
    std::cout << "\U0001F4DE Welcome to your awesome PhoneBook ! \U0001F4DE" << std::endl;
    std::cout << std::endl;
    while (!(std::cin).eof())
    {             
        std::cout << "What do you want to do? (ADD/SEARCH/EXIT)" << std::endl;    
        getline(std::cin, cmd);
        if (cmd == "SEARCH")
            p.searchContact();         
        else if (cmd == "ADD")  
            p.addContact();    
        else if (cmd == "EXIT")
            return (0);
        else
        {
            std::cout << std::endl;
            std::cout << "\U0001F6AB Wrong command \U0001F6AB" << std::endl;
            std::cout << std::endl;
        }
    }
    return 0;
}