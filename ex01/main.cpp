/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anouri <anouri@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/15 10:39:23 by anouri            #+#    #+#             */
/*   Updated: 2023/12/21 14:01:23 by anouri           ###   ########.fr       */
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

    while(1)
    {
        choice.clear();
        choice  = GetChoice();
        if (!choice.empty())
            phonebook.Execute(choice); 
    }
    return (0);
}

/*
1- Ask for a choice
    if is valid=> return choice
    else
        show error message
        ask again
*/


