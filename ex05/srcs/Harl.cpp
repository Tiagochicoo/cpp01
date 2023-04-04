/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpereira <tpereira@42Lisboa.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/04 09:38:48 by tpereira          #+#    #+#             */
/*   Updated: 2023/04/04 14:57:54 by tpereira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Harl.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Harl::Harl()
{ 
	this->text[0] = "DEBUG";
	this->text[1] = "INFO";
	this->text[2] = "WARNING";
	this->text[3] = "ERROR";
}

/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Harl::~Harl()
{
}

/*
** --------------------------------- OVERLOAD ---------------------------------
*/


/*
** --------------------------------- METHODS ----------------------------------
*/

void Harl::complain(std::string level)
{
	size_t i;
	
	for (i = 0; i < 4; i++)
	{
		if (level.compare(Harl::text[i]) == 0)
			break;
	}
	switch (i)
	{
	case 0:
			this->debug();
			break;
	case 1:
			this->info();
			break;
	case 2:
			this->warning();
			break;
	case 3:
			this->error();
			break;
	default:
		std::cout << "Error: Level doesn't exist!\nPlease use one of the following levels: \"DEBUG\", \"INFO\", \"WARNING\" or \"ERROR\"\n";
		break;
	}
}

void Harl::debug(void)
{
	std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger. I really do!\n";
}

void Harl::info(void)
{
	std::cout << "I cannot believe adding extra bacon costs more money. You didn't put enough bacon in my burger! If you did, I wouldn't be asking for more!\n";
}

void Harl::warning(void)
{
	std::cout << "I think I deserve to have some extra bacon for free. I've been coming for years whereas you started working here since last month.\n";
}

void Harl::error(void)
{
	std::cout << "This is unacceptable! I want to speak to the manager now.\n";
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/


/* ************************************************************************** */