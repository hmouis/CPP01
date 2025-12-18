/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmouis <hmouis@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/06 11:09:00 by hmouis            #+#    #+#             */
/*   Updated: 2025/10/08 12:11:56 by hmouis           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Sed.hpp"

int main(int ac, char **av)
{
    Sed sed;

    if (ac != 4)
    {
        std::cout << "Invalude number of argument.\n" ;
        return (1);
    }
    if (!av[2][0])
    {
        std::cout << "String is empty\n";
        return (1);
    }
    if (sed.Parse(av))
        return (1);
    if (sed.FillNewFile(av))
        return (1);
    return (0);
}