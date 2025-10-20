/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asemykin <asemykin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/20 21:29:55 by asemykin          #+#    #+#             */
/*   Updated: 2025/10/21 00:27:46 by asemykin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/HumanB.hpp"

HumanB::HumanB()
{
    _weapon = NULL;
}

HumanB::HumanB(std::string name)
{
    _weapon = NULL;
    _name = name;
}

HumanB::~HumanB()
{}

void HumanB::setWeapon(Weapon &type)
{
    _weapon = &type;
}

void HumanB::attack()
{
    if(_weapon)
        std::cout << _name << " attacks with their " << (*_weapon).getType() << std::endl;
    else
        std::cout << _name << " has no weapon! " << std::endl;
}
