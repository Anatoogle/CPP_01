/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asemykin <asemykin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/20 13:48:58 by asemykin          #+#    #+#             */
/*   Updated: 2025/10/20 20:46:19 by asemykin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
#define HUMANA_HPP

#include <iostream>
#include "../includes/Weapon.hpp"

class HumanA
{
private:
    std::string _name;
    Weapon &_weapon;
public:
    HumanA();
    HumanA(std::string name, Weapon &type);
    ~HumanA();
    void attack();
};

#endif