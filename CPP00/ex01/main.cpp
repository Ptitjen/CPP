/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeulliot <jeulliot@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/24 16:13:35 by jeulliot          #+#    #+#             */
/*   Updated: 2022/06/28 17:22:15 by jeulliot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "contact.class.hpp"
#include "phonebook.class.hpp"
#include <string.h>

int main (void) 
{
    Phonebook p;
    
    while (1)
    {
        char cmd[1000]; //voir taille
        std::cout << "What do you want to do? ADD/SEARCH/EXIT" << std::endl;
        std::cin >> cmd;
        if (strcmp(cmd, "SEARCH") == 0)
            p.searchContact();
        else if (strcmp(cmd, "ADD") == 0)
            p.addContact();
        else if (strcmp(cmd, "EXIT") == 0)
            return (0);
        else
            std::cout << "Wrong command" << std::endl;
    }
    return 0;
}