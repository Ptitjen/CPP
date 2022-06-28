/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeulliot <jeulliot@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/24 16:13:35 by jeulliot          #+#    #+#             */
/*   Updated: 2022/06/28 19:28:28 by jeulliot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include "contact.class.hpp"
#include "phonebook.class.hpp"

int main (void) 
{
    Phonebook p;
    std::cout << "\U0001F4DE Welcome to your awesome PhoneBook ! \U0001F4DE" << std::endl;
    while (1)
    {
        std::string cmd;
        std::cout << "What do you want to do? (ADD/SEARCH/EXIT)" << std::endl;
        std::cin >> cmd;
        if (cmd == "SEARCH")
            p.searchContact();
        else if (cmd == "ADD")
            p.addContact();
        else if (cmd == "EXIT")
            return (0);
        else
            std::cout << "Wrong command" << std::endl;
    }
    return 0;
}