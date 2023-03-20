/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpereira <tpereira@42Lisboa.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/17 15:34:02 by tpereira          #+#    #+#             */
/*   Updated: 2023/03/19 11:12:35 by tpereira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Zombie.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Zombie::Zombie(std::string name) : _name(name)
{
	std::cout << this->_name << " Constructed!" << std::endl;
}

/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Zombie::~Zombie()
{
	std::cout << this->_name << " Destructed!" << std::endl;
}

/*
** --------------------------------- OVERLOAD ---------------------------------
*/

/*
** --------------------------------- METHODS ----------------------------------
*/

void Zombie::announce(void) const
{
	std::cout << _name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

Zombie* Zombie::newZombie(std::string name)
{
	Zombie *newZombie = new Zombie;
	newZombie->setName(name);
	return (newZombie);
}

void Zombie::randomChump(std::string name)
{
	Zombie randomChump;
	randomChump.setName(name);
	randomChump.announce();
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/

void Zombie::setName(std::string name)
{
	this->_name = name;
}

std::string Zombie::getName() const
{
	return (this->_name);
}

/* ************************************************************************** */
