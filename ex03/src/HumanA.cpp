/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asemykin <asemykin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/20 14:11:49 by asemykin          #+#    #+#             */
/*   Updated: 2025/10/21 00:18:20 by asemykin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/HumanA.hpp"

HumanA::HumanA(std::string name, Weapon &type):_name(name), _weapon(type)
{}

HumanA::~HumanA()
{}

void HumanA::attack()
{
    std::cout << _name << " attacks with their " << _weapon.getType() << std::endl;
}
