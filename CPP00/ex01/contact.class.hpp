/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.class.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeulliot <jeulliot@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/28 15:17:47 by jeulliot          #+#    #+#             */
/*   Updated: 2022/06/29 14:38:14 by jeulliot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_H
# define CONTACT_H

# include <iostream>

class Contact {

    public:

        Contact(void);
        ~Contact(void);

        void    init(void);
        void    displayFull(void);
        void    displayPartial(int i);
        void    changeInfo(std::string info[5]);
        std::string   trunkedString(std::string str);

    private:
    
        std::string firstName;
        std::string lastName;
        std::string nickname;
        std::string phoneNumber;
        std::string darkestSecret;
};

#endif