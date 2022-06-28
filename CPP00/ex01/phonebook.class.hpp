/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.class.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeulliot <jeulliot@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/28 15:20:11 by jeulliot          #+#    #+#             */
/*   Updated: 2022/06/28 18:35:42 by jeulliot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_H
# define PHONEBOOK_H

# include <iostream>
# include "contact.class.hpp"

class Phonebook {

    public:

        Contact contactArray[8];
        int     nbOfContact;

        Phonebook(void);//constructeur
        ~Phonebook(void);//destructeur

        int			searchInList(std::string cmd);
		void		searchContact(void);
		void		displayList(void);
        void		addContact(void);
        std::string	askField(std::string field);
		std::string	trunkedString(std::string str);
};
#endif