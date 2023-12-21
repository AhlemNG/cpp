/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anouri <anouri@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/15 14:24:23 by anouri            #+#    #+#             */
/*   Updated: 2023/12/21 14:31:17 by anouri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"
#include "PhoneBook.hpp"

PhoneBook::PhoneBook()
{
}

PhoneBook::~PhoneBook()
{
}

void PhoneBook::AddContact()
{
    std::cout << std::endl << "Adding a contact..." << std::endl;
    
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

bool IsValidIndex(char index);

void PhoneBook::searchContact()
{
    std::cout << std::endl << "Searching..." << std::endl;
    
    int i = 0;
    std::cout << "index | " << "first name | " << "last name  | " << "nick name  |" << std::endl;
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
    int index = atoi(std::string(1, GetIndex()).c_str());
    if (!Contacts[index].GetFirstName().length())
    {
        std::cin.clear();
        std::cout << "Empty!" << std::endl;
        return;
    }
    Contacts[index].DisplayContact();
}

void PhoneBook::Exit()
{
      std::cout << std::endl << "Leaving..." << std::endl;
      exit(0);
}

void PhoneBook::Execute(std::string choice)
{
    if (!choice.compare("ADD"))
        AddContact();
    else if (!choice.compare("SEARCH"))
        searchContact();
    else if (!choice.compare("EXIT"))
        Exit();
}


char PhoneBook::GetIndex()
{
    char index;
    do
    {
        std::cin.clear();
        std::cin.ignore();
        std::cout << "Please enter the index from the list above" << std::endl;
        std::cout << "Index: ";
        if (!(std::cin >> index) || std::cin.eof())
            exit(0);
        std::cout << std::endl;
    }while(!IsValidIndex(index));
    return(index);
}