/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asemykin <asemykin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/23 00:55:35 by asemykin          #+#    #+#             */
/*   Updated: 2025/10/23 01:18:10 by asemykin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Harl.hpp"

void test(std::string line)
{
    line = "nein";
    std::cout << &line << std::endl;
}

int main()
{
    std::string line = "hallo";
    std::cout << &line << std::endl;

    test(line);
    std::cout << &line << std::endl;
    return 0;
}
