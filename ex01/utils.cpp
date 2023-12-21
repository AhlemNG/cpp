/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anouri <anouri@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/19 16:29:17 by anouri            #+#    #+#             */
/*   Updated: 2023/12/21 14:22:51 by anouri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"
#include "PhoneBook.hpp"

bool IsValidIndex(char index)
{
    if (isdigit(index))
    {
        if (index >= (0 + 48) && index < (8 + 48))
            return (true);
    }
    std::cout << "invalid index" << std::endl;
    return(false);
}

bool IsValidChoice(std::string choice)
{
    if ((!choice.compare("ADD") || !choice.compare("SEARCH") || !choice.compare("EXIT")) && !choice.empty())
        return (true);
    std::cout << std::endl << "Invalid choice!!" << std::endl << std::endl;
    return(false);
    
}

void prompt()
{
    std::cout <<std::endl << "***********Welcome to your PhoneBook***********" << std::endl;
    std::cout << "Please enter your choice" << std::endl;
    std::cout << "To add a new contact, tap: ADD" << std::endl;
    std::cout << "To display a specific contact, tap: SEARCH" << std::endl;
    std::cout << "To leave program, tap: EXIT" << std::endl;
    std::cout << "***********************************************" << std::endl;
    std::cout << std::endl << "Your choice : ";
} 

std::string GetChoice()
{
    std::string choice;

    do
    {
        choice.clear();
        prompt();
        if (std::cin.eof() || !(std::cin >> choice))
        {
            std::cin.clear();
            choice = "EXIT";

        }
    }
    while(!IsValidChoice(choice));
    return(choice);
}

