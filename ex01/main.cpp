/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anouri <anouri@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/15 10:39:23 by anouri            #+#    #+#             */
/*   Updated: 2023/12/20 17:19:41 by anouri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Contact.hpp"
#include "PhoneBook.hpp"

bool IsValidChoice(std::string choice);

/*a valid choice is 
NOT EOF 
ONE OF : ADD, SEARCH, EXIT*/

std::string prompt()
{
    std::string choice;
    
    while (1)
    {
        std::cout <<std::endl << "***********Welcome to your PhoneBook***********" << std::endl;
        std::cout << "Please enter your choice" << std::endl;
        std::cout << "To add a new contact, tap: ADD" << std::endl;
        std::cout << "To display a specific contact, tap: SEARCH" << std::endl;
        std::cout << "To leave program, tap: EXIT" << std::endl;
        std::cout << "***********************************************" << std::endl;
        std::cout << std::endl << "Your choice : ";
    
        if (!std::getline(std::cin, choice))
        {
            std::cout <<"empty**************************************\n";
            exit(0);
        }
        if (!choice.empty())
         return(choice);
    }
    // return (0);
}


int main()
{
    PhoneBook phonebook;
    std::string choice;

    while(choice.compare("EXIT"))
    {
        choice.clear();
        
        choice = prompt();
        if (IsValidChoice(choice))
            phonebook.Execute(choice); 
    }
    if (!choice.compare("EXIT"))
    {
        choice.clear();
        phonebook.Exit();
    }
    return (0);
}

