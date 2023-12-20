/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anouri <anouri@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/19 16:29:17 by anouri            #+#    #+#             */
/*   Updated: 2023/12/20 16:38:40 by anouri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"
#include "PhoneBook.hpp"

bool IsValidIndex(int index)
{
    if (index >= 0 && index < 8)
        return (true);
    return(false);
}

bool IsValidChoice(std::string choice)
{
    if ((!choice.compare("ADD") || !choice.compare("SEARCH") || !choice.compare("EXIT")) && !choice.empty())
        return (true);
    std::cout << std::endl << "Invalid choice!!" << std::endl << std::endl;
    return(false);
    
}