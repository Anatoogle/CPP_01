/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asemykin <asemykin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/20 10:16:16 by asemykin          #+#    #+#             */
/*   Updated: 2025/11/12 10:55:00 by asemykin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <iostream>

class Zombie
{
private:
    std::string _name; 
public:
    void announce(void);
    void setName(std::string name);
    Zombie();
    ~Zombie();
};

Zombie *zombieHorde(int N, std::string name);

#endif
