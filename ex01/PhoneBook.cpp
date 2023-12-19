/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anouri <anouri@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/15 14:24:23 by anouri            #+#    #+#             */
/*   Updated: 2023/12/19 17:35:38 by anouri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"
#include "PhoneBook.hpp"

PhoneBook::PhoneBook()
{
    // for (int i = 0; i < 8 ; i++)
    // {
    //     Contacts[i].first_name = NULL;
    //     Contacts[i].last_name = NULL;
    //     Contacts[i].nickname = NULL;
    //     Contacts[i].darkest_secret = NULL;
    //     Contacts[i].phone_number = NULL;
           
    // }
}

PhoneBook::~PhoneBook()
{
}

void PhoneBook::AddContact()
{
    static int i;
    std::string first_name;
    std::string last_name;
    std::string nick_name;
    std::string darkest_secret;
    std::string phone_number;

    std::cout << "Please entre the contact's informations" << std::endl;
    std::cout << "First Name: " << std::endl;
    std::cin >> first_name;
    std::cout << "Last Name: " << std::endl;
    std::cin >> last_name;
    std::cout << "Nickname: " << std::endl;
    std::cin >> nick_name;
    std::cout << "Darkest secret :D : " << std::endl;
    std::cin >> darkest_secret;
    std::cout << "Phone Number: " << std::endl;
    std::cin >> phone_number;

    Contact newContact(first_name, last_name, nick_name, darkest_secret, phone_number);
    Contacts[i] = newContact;
    i++;
    if (i == 8)
        i = 0; 
}

bool IsValidIndex(int index);

void PhoneBook::searchContact()
{
    int i = 0;
    std::cout << "index | " << "first name | " << "last name | " << "nick name" << std::endl;
    while(i < 8)
    {
        if(Contacts[i].GetFirstName().length())
        {
            Contacts[i].DisplayPhoneBook(i);
            i++;
        }
        else
        {
            std::cout << "\n";
            break;
        }
    }
    /*works only with int if a char =>pbm*/
    int index = -1;
    while (!IsValidIndex(index))
    {
        std::cout << "Please enter the index from the list above" << std::endl;
        std::cout << "Index: ";
        std::cin >> index;
        std::cout << std::endl;
    }
    if(IsValidIndex(index) && Contacts[index].GetFirstName().length())
        Contacts[index].DisplayContact();
}


