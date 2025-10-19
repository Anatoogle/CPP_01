/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asemykin <asemykin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/19 18:54:37 by asemykin          #+#    #+#             */
/*   Updated: 2025/10/20 00:15:26 by asemykin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <iostream>

class Zombie {
private:
    std::string _name;
    
public:
    Zombie(std::string name);
    ~Zombie();
    void announce(void);
};

Zombie *newZombie(std::string name);
void randomChunk(std::string name);

#endif