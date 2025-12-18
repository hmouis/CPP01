/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sed.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmouis <hmouis@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/06 11:23:47 by hmouis            #+#    #+#             */
/*   Updated: 2025/11/21 14:45:53 by hmouis           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Sed.hpp"

int Sed::Parse(char **av)
{

    inFile.open(av[1]);
    if (!inFile.is_open())
    {
        std::cout << "Failed to open the in file " << av[1] << "\n" ;
        return (1);
    }
    std::string file = av[1];
    file += ".replace";
    outFile.open(file.c_str());
    if (!outFile.is_open())
    {
        std::cout << "Failed to open the out file\n";
        return (1);
    }
    S1 = av[2];
    S2 = av[3];
    return (0);
}

int Sed::FillOutFile(std::string line)
{
    for (int i = 0; line[i]; i++)
    {
        if (line.compare(i, S1.length(), S1) == 0)
        {
            i += S1.length() - 1;
            outFile << S2;
        }
        else
            outFile << line[i];
        if (outFile.fail())
             return (std::cout << "Failed to write to this file\n", 1);
    }
    return (0);
}

int Sed::FillNewFile(char **av)
{

    std::string line;
    std::string tmp;

    std::ifstream TmpFile(av[1]);
    if (!TmpFile.is_open())
    {
        std::cout << "Failed to open the file " << av[1] << "\n" ;
        return (1);
    }
    std::getline(TmpFile, tmp);
    while (std::getline(inFile, line))
    {
        if (FillOutFile(line))
            return (1);
        if (std::getline(TmpFile, tmp))
            outFile << "\n";
    }
    inFile.clear();
    inFile.seekg(-1, std::ios::end);
    char last_char;
    inFile.get(last_char);
    if (last_char == '\n')
        outFile << "\n";
    TmpFile.close();
    inFile.close();
    outFile.close();
    return (0);
}
