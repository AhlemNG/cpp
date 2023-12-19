/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anouri <anouri@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/15 10:39:23 by anouri            #+#    #+#             */
/*   Updated: 2023/12/19 17:37:06 by anouri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Contact.hpp"
#include "PhoneBook.hpp"

int main()
{
    PhoneBook phonebook;
    std::string choice;
    while(1)
    {
        choice.clear();
        
        std::cout <<std::endl << "***********Welcome to your PhoneBook***********" << std::endl;
        std::cout << "Please enter your choice" << std::endl;
        std::cout << "To add a new contact, tap: ADD" << std::endl;
        std::cout << "To display a specific contact, tap: SEARCH" << std::endl;
        std::cout << "To leave program, tap: EXIT" << std::endl;
        std::cout << "***********************************************" << std::endl;
        std::cout << std::endl << "Your choice : ";
        std::cin >> choice;
        if (!choice.compare("ADD"))
        {
            std::cout << std::endl << "Adding a contact..." << std::endl;
            phonebook.AddContact();
        }
        if (!choice.compare("SEARCH"))
        {
            std::cout << std::endl << "Searching..." << std::endl;
            phonebook.searchContact();   
        }
        if (!choice.compare("EXIT"))
        {
            std::cout << std::endl << "Leaving..." << std::endl;
            choice.clear();
            return 0;
        }
        // else
        // {
        //     choice.clear();
        //     std::cout << std::endl << "Invalid input!!" << std::endl << std::endl;
        // }
    }
    
    return (0);
}