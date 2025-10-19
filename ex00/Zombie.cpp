/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asemykin <asemykin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/20 00:07:09 by asemykin          #+#    #+#             */
/*   Updated: 2025/10/20 00:17:55 by asemykin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(std::string name)
{
    _name = name;
}

Zombie::~Zombie()
{
    std::cout << "Aaarrrrggghh..." << std::endl;
}

void Zombie::announce()
{
    std::cout << _name << " BraiiiiiiinnnzzzZ... " << std::endl;
}
