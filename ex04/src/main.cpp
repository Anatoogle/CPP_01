/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asemykin <asemykin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/21 00:37:52 by asemykin          #+#    #+#             */
/*   Updated: 2025/10/21 00:52:32 by asemykin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "../includes/replace.hpp"

int main(int argc, char **argv)
{
    if(argc != 4)
        return 0;

    if(replace(argv[1], argv[3], argv[3]))
        return 0;
    else
        return 1;
}
