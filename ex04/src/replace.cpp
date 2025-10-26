/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   replace.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asemykin <asemykin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/21 00:43:49 by asemykin          #+#    #+#             */
/*   Updated: 2025/10/22 23:42:51 by asemykin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "../includes/replace.hpp"
#include <fstream>

static void ft_replace_line(std::string &line, std::string s1, std::string s2)
{
    size_t pos = 0;
    
    while(1)
    {
        pos = line.find(s1, pos);
        if(pos == std::string::npos)
            break;
        line.erase(pos, s1.length());
        line.insert(pos, s2);        
        pos += s2.length();
    }
}

int ft_replace_file(const std::string &file_path, std::string s1, std::string s2)
{  
    std::ifstream file;
    file.open(file_path.c_str());
    if(!file.is_open())
        return 1;

    std::string     newFile = file_path + ".replace";
    std::ofstream   out(newFile.c_str());
    std::string     line;
    bool            firstLine = true;
    
    if(!out.is_open())
        return 1;

    while(std::getline(file, line))
    {  
        ft_replace_line(line, s1, s2);
        if(!firstLine)
            out << "\n";
        out << line; 
        firstLine = false;
    }

    out.close();
    file.close();
    
    return 0;
}
