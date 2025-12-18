/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmouis <hmouis@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/01 11:51:30 by hmouis            #+#    #+#             */
/*   Updated: 2025/10/05 14:51:24 by hmouis           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main()
{
    Zombie *zom;
    randomChump("random zombie0");
    randomChump("random zombie1");
    randomChump("random zombie2");
    randomChump("random zombie3");
    zom = newZombie("new zombie1");
    zom->announce();
    delete zom;
    zom = newZombie("new zombie2");
    zom->announce();
    delete zom;
    zom = newZombie("new zombie3");
    zom->announce();
    delete zom;
    zom = newZombie("new zombie4");
    zom->announce();
    delete zom;
    
}
