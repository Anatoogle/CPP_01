/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asemykin <asemykin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/23 00:55:35 by asemykin          #+#    #+#             */
/*   Updated: 2025/11/12 10:29:48 by asemykin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Harl.hpp"

int main()
{
    Harl harl;
    
    std::cout   << "Talk to Harl: 'DEBUG' 'INFO' 'WARNING' 'ERROR' or exit with 'EXIT'\n" << std::endl;
    std::string command;
    
    while(1)
    {        
        if(std::cin.eof())
            break;
        std::getline(std::cin, command);
        if(command == "EXIT")
            break;
        harl.complain(command);
    }
    return 0;
}
