/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpereira <tpereira@42Lisboa.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/19 11:59:59 by tpereira          #+#    #+#             */
/*   Updated: 2023/03/19 12:21:03 by tpereira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Weapon.hpp"
#include "../includes/HumanA.hpp"

int main(void)
{
	Weapon myWeapon = Weapon("minigun");
	HumanA player("Bob", myWeapon);
	player.attack();

	return 0;
}