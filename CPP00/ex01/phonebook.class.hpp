/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.class.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeulliot <jeulliot@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/28 15:20:11 by jeulliot          #+#    #+#             */
/*   Updated: 2022/06/28 19:47:18 by jeulliot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_H
# define PHONEBOOK_H

# include <iostream>
# include "contact.class.hpp"

class Phonebook {

    public:

        Phonebook(void);
        ~Phonebook(void);       
		void		searchContact(void);		
        void		addContact(void);

	private:
		
		Contact contactArray[8];
        int     nbOfContact;

		void		displayList(void);
		int			searchInList(std::string cmd);
		void		eraseContact(void);
		std::string	askField(std::string field);
		std::string	trunkedString(std::string str);

};
#endif