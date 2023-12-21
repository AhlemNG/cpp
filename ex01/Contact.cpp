/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anouri <anouri@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/15 14:25:19 by anouri            #+#    #+#             */
/*   Updated: 2023/12/21 14:39:04 by anouri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"
#include <iostream>
#include <iomanip>

Contact::Contact()
{
}

Contact::~Contact()
{
}

Contact::Contact( std::string first_name, std::string last_name,std::string nick_name, std::string darkest_secret, std::string phone_number)
{
    _first_name = first_name;
    _last_name = last_name;
    _nick_name = nick_name;
    _darkest_secret = darkest_secret;
    _phone_number = phone_number;
}

Contact Contact::CreateContact() 
{
    Contact new_contact;
        
    std::cout << "Please entre the contact's informations" << std::endl;
    std::cout << "First Name: " << std::endl;
    std::cin >> new_contact._first_name;
    std::cout << "Last Name: " << std::endl;
    std::cin >> new_contact._last_name;
    std::cout << "Nickname: " << std::endl;
    std::cin >> new_contact._nick_name;
    std::cout << "Darkest secret :D : " << std::endl;
    std::cin >> new_contact._darkest_secret;
    std::cout << "Phone Number: " << std::endl;
    std::cin >> new_contact._phone_number;
        
    return new_contact;
}

void Contact::DisplayContact() const
{    
    std::cout << "First Name: "<<  _first_name << std::endl;
    std::cout << "Last Name: " << _last_name << std::endl;
    std::cout << "Nickname: "<< _nick_name << std::endl;
    std::cout << "Darkest secret :D : " << _darkest_secret << std::endl;
    std::cout << "Phone Number: " << _phone_number<< std::endl;
}

void Contact::DisplayPhoneBook(int index) const
{
    std::string displayedFirstName = (_first_name.length() > 10) ? (_first_name.substr(0, 9) + ".") : _first_name;
    std::string displayedLastName = (_last_name.length() > 10) ? (_last_name.substr(0, 9) + ".") : _last_name;
    std::string displayedNickName = (_nick_name.length() > 10) ? (_nick_name.substr(0, 9) + ".") : _nick_name;

    std::cout << std::setw(5) << std::left << index << " | " << std::setw(10)
    << std::left << displayedFirstName << " | " << std::setw(10)
    << std::left << displayedLastName  << " | " << std::setw(10)
    << std::left << displayedNickName  << " | " << std::endl;
}

std::string Contact::GetFirstName()
{
    return(this->_first_name);
}