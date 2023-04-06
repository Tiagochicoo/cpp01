/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpereira <tpereira@42Lisboa.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/04 09:38:40 by tpereira          #+#    #+#             */
/*   Updated: 2023/04/05 17:38:27 by tpereira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_HPP
# define HARL_HPP

# include <iostream>
# include <string>
# include <map>
# include <climits>

class Harl
{
	private:
		void debug(void);
		void info(void);
		void warning(void);
		void error(void);
		std::string text[4];

	public:

		Harl();
		~Harl();

		void complain(std::string level);
};

#endif /* ************************************************************ HARL_H */
