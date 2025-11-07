/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asemykin <asemykin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/23 00:55:35 by asemykin          #+#    #+#             */
/*   Updated: 2025/10/28 09:35:36 by asemykin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Harl.hpp"

int main(int argc, char **argv)
{
    Harl harl;
    
    if(argc == 2)
        harl.complain(argv[1]);
    else
        harl.complain("invalid");
    
    return 0;
}
