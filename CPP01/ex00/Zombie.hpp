#include <iostream>

class	Zombie {
	public :
		Zombie();
		~Zombie();
		void	set_name( std::string name );
		void	announce( void );
	private :
		std::string	name;
};

Zombie*	newZombie( std::string name );
void	randomChump( std::string name );
