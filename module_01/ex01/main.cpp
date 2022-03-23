# include <iostream>
# include "Zombie.hpp"

int	main()
{
	Zombie* horde;
	horde = zombieHorde(7, "Slava");
	for (int i = 0; i < 7; i++)
		horde[i].announce();
	delete [] horde;
	return (0);
}