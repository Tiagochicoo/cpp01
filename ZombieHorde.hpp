#ifndef ZOMBIEHORDE_HPP
# define ZOMBIEHORDE_HPP

# include <iostream>
# include <string>

class ZombieHorde
{

	public:

		ZombieHorde();
		ZombieHorde( ZombieHorde const & src );
		~ZombieHorde();

		ZombieHorde &		operator=( ZombieHorde const & rhs );

	private:

};

std::ostream &			operator<<( std::ostream & o, ZombieHorde const & i );

#endif /* ***************************************************** ZOMBIEHORDE_H */