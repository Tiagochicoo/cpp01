/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpereira <tpereira@42Lisboa.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/19 12:04:38 by tpereira          #+#    #+#             */
/*   Updated: 2023/03/19 22:07:09 by tpereira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
# define HUMANA_HPP

# include <iostream>
# include <string>
# include "./Weapon.hpp"

class HumanA
{
	private:
		Weapon& 	_weapon;
		std::string _name;

	public:

		HumanA(std::string name, Weapon& weapon);
		~HumanA();

		void attack();
};


#endif /* ********************************************************** HUMANA_H */
