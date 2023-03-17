/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpereira <tpereira@42Lisboa.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/17 12:21:25 by tpereira          #+#    #+#             */
/*   Updated: 2023/03/17 12:33:38 by tpereira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Zombie.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Zombie::Zombie(void)
{
	std::cout << "Constructor called" << std::endl;
}

/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Zombie::~Zombie(void)				// delete all contacts (free memory)
{
	std::cout << "Destructor called" << std::endl;
}

/*
** --------------------------------- METHODS ----------------------------------
*/

// PRIVATE METHODS (_method_name)


// PUBLIC METHODS

void Zombie::announce()
{
	std::cout << "Zombie.name" << std::endl;
}


/*
** --------------------------------- ACCESSOR ---------------------------------
*/


/* ************************************************************************** */