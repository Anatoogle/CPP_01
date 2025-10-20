/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asemykin <asemykin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/20 13:45:22 by asemykin          #+#    #+#             */
/*   Updated: 2025/10/20 22:51:42 by asemykin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
#define WEAPON_HPP

#include <iostream>

class Weapon
{
private:
    std::string type;
    
public:
    Weapon();
    Weapon(std::string weapon);
    ~Weapon();
    std::string getType()const;
    void setType(std::string type);
};

#endif