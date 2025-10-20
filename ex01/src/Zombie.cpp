/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asemykin <asemykin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/20 10:12:35 by asemykin          #+#    #+#             */
/*   Updated: 2025/10/20 12:15:10 by asemykin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Zombie.hpp"

Zombie::Zombie() 
{}

Zombie::~Zombie()
{
    std::cout << _name << " Aarrgggghhhh..." << std::endl;
}

void Zombie::announce()
{
    std::cout << _name << " BRAINZZZZ..." << std::endl;
}
