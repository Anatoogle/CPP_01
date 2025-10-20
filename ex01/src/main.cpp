/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asemykin <asemykin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/20 10:12:16 by asemykin          #+#    #+#             */
/*   Updated: 2025/10/20 12:14:59 by asemykin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Zombie.hpp"

int main()
{
    int N               = 5;
    std::string _name   = "Zombie";
    
    Zombie *zombie = zombieHorde(N, _name);
    delete[] zombie;

    return 0;
}