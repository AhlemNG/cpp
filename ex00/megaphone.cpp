/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anouri <anouri@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/14 13:28:19 by anouri            #+#    #+#             */
/*   Updated: 2023/12/14 15:23:51 by anouri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

static std::string capitalizeString(std::string str)
{
    int i;
    
    i = 0;
    while(str[i])
    {
     str[i] = std::toupper(str[i]);
     i++;
    }
    return(str);
}

int main(int argc, char *argv[])
{
    if (argc >= 2)
    {
        int i = 1;
        while (argv[i])
            std::cout << capitalizeString(argv[i++]);
        std::cout << std::endl;
    }
    else if (argc == 1)
    {
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
    }
    return(0);
}