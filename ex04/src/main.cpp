/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asemykin <asemykin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/21 00:37:52 by asemykin          #+#    #+#             */
/*   Updated: 2025/10/22 22:21:44 by asemykin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "../includes/replace.hpp"
#include <fstream>

int main(int argc, char **argv)
{
    if(argc != 4)
        return 1;
        
    std::string filename = argv[1];
    std::string s1 = argv[2];
    std::string s2 = argv[3];
    
    std::ifstream file(filename.c_str());
    if(!file.good())
        return 0;

    if(s1.empty())
        return 0;

    if(ft_replace_file(filename, s1, s2) == 0)
        return 0;
    else
        return 1;
}
