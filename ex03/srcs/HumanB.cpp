/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpereira <tpereira@42Lisboa.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/19 12:04:35 by tpereira          #+#    #+#             */
/*   Updated: 2023/03/19 22:38:06 by tpereira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/HumanB.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

HumanB::HumanB(std::string name) : _weapon(NULL), _name(name)
{
	// std::cout << name << " constructed!\n";
}

/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

HumanB::~HumanB()
{
	// std::cout << this->_name << " Destructed!\n";
}

/*
** --------------------------------- OVERLOAD ---------------------------------
*/

/*
** --------------------------------- METHODS ----------------------------------
*/

void HumanB::setWeapon(Weapon& weapon)
{
	this->_weapon = &weapon;
}

void	HumanB::attack() const
{
	if (this->_weapon == NULL)
		std::cout << this->_name << " attacks with their bare hands!\n";
	else
		std::cout << this->_name << " attacks with their " << this->_weapon->getType() << "\n";
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/


/* ************************************************************************** */