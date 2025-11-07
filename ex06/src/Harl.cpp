/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asemykin <asemykin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/23 01:00:32 by asemykin          #+#    #+#             */
/*   Updated: 2025/10/28 09:34:18 by asemykin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Harl.hpp"

Harl::Harl(){};
Harl::~Harl(){};

void Harl::debug(void)
{
    std::cout << "[DEBUG]\nI love having extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger. I really do!\n" << std::endl;
}

void Harl::info(void)
{
    std::cout << "[INFO]\nI cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!\n" << std::endl;
}

void Harl::warning(void)
{
    std::cout << "[WARNING]\nI think I deserve to have some extra bacon for free. I’ve been coming for years, whereas you started working here just last month.\n" << std::endl;
}

void Harl::error(void)
{
    std::cout << "[ERROR]\nThis is unacceptable! I want to speak to the manager now.\n" << std::endl;
}

void Harl::complain(std::string level)
{
    void (Harl::*func[])() = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};
    std::string levels[] = {"DEBUG", "INFO", "WARNING", "ERROR"};

    int length = sizeof(levels) / sizeof(levels[0]);
    int i = 0;
    for (; i < length; i++)
    {
        if(level == levels[i])
            break;
    }
    switch(i)
    {
        case 0: 
            (this->*func[0])();
            __attribute__ ((fallthrough));
        case 1: 
            (this->*func[1])();
            __attribute__ ((fallthrough));
        case 2: 
            (this->*func[2])();
            __attribute__ ((fallthrough));
        case 3: 
            (this->*func[3])(); 
            break;
        default: 
            std::cout << "[ Probably complaining about insignificant problems ]" << std::endl; 
            break;
    }
}
