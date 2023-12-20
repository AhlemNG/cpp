/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anouri <anouri@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/15 10:22:29 by anouri            #+#    #+#             */
/*   Updated: 2023/12/20 16:54:22 by anouri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONE_BOOK_H
#define PHONE_BOOK_H

#include "Contact.hpp"
#include "PhoneBook.hpp"

class PhoneBook {
    private:    
        Contact Contacts[8];
        void AddContact();
        void searchContact();
    public:
        PhoneBook();
        ~PhoneBook();
        void Exit();
        void Execute(std::string choice);
};

#endif