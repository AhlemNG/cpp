/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anouri <anouri@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/15 10:36:04 by anouri            #+#    #+#             */
/*   Updated: 2023/12/19 16:11:54 by anouri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_H
#define CONTACT_H

#include <iostream>

class Contact
{
    private:
        std::string _first_name;
        std::string _last_name;
        std::string _nick_name;
        std::string _darkest_secret;
        std::string _phone_number; 
    public:
        Contact(/* args */);
        Contact( std::string first_name, std::string last_name,std::string nick_name, std::string darkest_secret, std::string phone_number);
        ~Contact();
        Contact CreateContact();
        void DisplayContact() const;   
        void DisplayPhoneBook(int index) const;
        std::string GetFirstName();
};

#endif