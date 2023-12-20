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
void prompt();
std::string GetChoice();
/*a valid choice is 
NOT EOF 
ONE OF : ADD, SEARCH, EXIT*/




int main()
{
    PhoneBook phonebook;
    std::string choice;

    while(choice.compare("EXIT"))
    {
        choice  = "RESET" ;
        prompt();
        
        if (!choice.compare("RESET"))
        {
            // std::cin >> choice;
            choice  = GetChoice();
            if (IsValidChoice(choice))
            {
                phonebook.Execute(choice); 
            }
        }

    }
    phonebook.Exit();
    return (0);
}

