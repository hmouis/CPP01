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
    randomChump("random zombie 1");
    randomChump("random zombie 2");
    randomChump("random zombie 3");
    randomChump("random zombie 4");
    zom = newZombie("new zombie 1");
    zom->announce();
    delete zom;
    zom = newZombie("new zombie 2");
    zom->announce();
    delete zom;
    zom = newZombie("new zombie 3");
    zom->announce();
    delete zom;
    zom = newZombie("new zombie 4");
    zom->announce();
    delete zom;
    return 0;
}
