/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asemykin <asemykin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/20 12:21:41 by asemykin          #+#    #+#             */
/*   Updated: 2025/10/20 13:28:31 by asemykin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main()
{
    std::string str = "HI THIS IS BRAIN";
    std::string *stringPTR = &str;
    std::string &stringREF = str;

    std::cout << "The memory address of the string variable: " << &str << std::endl;
    std::cout << "The memory address held by stringPTR:      " << stringPTR << std::endl;
    std::cout << "The memory address held by stringREF:      " << &stringREF << std::endl;
    
    std::cout << "The value of the string variable:          " << str << std::endl;
    std::cout << "The value pointed to by stringPTR:         " << *stringPTR << std::endl;
    std::cout << "The value pointed to by stringREF:         " << stringREF << std::endl;
}
