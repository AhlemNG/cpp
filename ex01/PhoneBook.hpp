/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anouri <anouri@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/15 10:22:29 by anouri            #+#    #+#             */
/*   Updated: 2023/12/19 13:10:14 by anouri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONE_BOOK_H
#define PHONE_BOOK_H

#include "Contact.hpp"
#include "PhoneBook.hpp"

class PhoneBook {
    private:    
        Contact Contacts[8];
    public:
        PhoneBook();
        ~PhoneBook();
        void AddContact();
        void searchContact();
};

#endif