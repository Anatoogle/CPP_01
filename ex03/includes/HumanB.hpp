/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asemykin <asemykin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/20 21:30:01 by asemykin          #+#    #+#             */
/*   Updated: 2025/10/20 22:49:09 by asemykin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
#define HUMANB_HPP

#include <iostream>
#include "../includes/Weapon.hpp"

class HumanB
{
private:
    std::string _name;
    Weapon *_weapon;
public:
    HumanB();
    HumanB(std::string name);
    ~HumanB();
    void setWeapon(Weapon &type);
    void attack();
};

#endif