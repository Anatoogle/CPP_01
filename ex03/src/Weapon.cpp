/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asemykin <asemykin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/20 14:21:00 by asemykin          #+#    #+#             */
/*   Updated: 2025/10/20 22:51:46 by asemykin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Weapon.hpp"

Weapon::Weapon(std::string weapon)
{
    setType(weapon);
}

Weapon::Weapon()
{}

Weapon::~Weapon()
{}

void Weapon::setType(std::string weapon)
{
    type = weapon;
}

std::string Weapon::getType()const
{
    return type;
}
