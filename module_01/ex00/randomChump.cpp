#include "Zombie.hpp"
void randomChump(std::string name)
{
	Zombie* newBorn = new Zombie(name);
	newBorn->announce();
}
