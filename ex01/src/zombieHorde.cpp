/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asemykin <asemykin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/20 10:21:05 by asemykin          #+#    #+#             */
/*   Updated: 2025/11/12 11:01:31 by asemykin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Zombie.hpp"

#include <sstream>

Zombie *zombieHorde(int N, std::string name)
{
    if( N <= 1)
    {
        std::cout << N << " Zombie(s) is not a Horde!" << std::endl;
        return NULL;
    }
    
    Zombie *zombie = new Zombie[N];
    
    for(int i = 0; i < N; i++)
    {
        std::stringstream out;
        out << i+1;
        std::string s = out.str();
        
        zombie[i].setName(name + s);
        zombie[i].announce();
    }
    return zombie;
}

void Zombie::setName(std::string name)
{
    _name = name;
}
