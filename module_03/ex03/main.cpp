
#include "FragTrap.hpp"

#include "DiamondTrap.hpp"

int main()
{
//	ClapTrap Human("Human");
//	Human.attack("Enemy");
//	ScavTrap Robot("Robot");
//	Robot.attack("bob");
//	Robot.guardGate();
//	Robot.takeDamage(10);
//	Robot.beRepaired(3);
//	FragTrap Bot("Bot");
//	Bot.highFivesGuys();
//	DiamondTrap *bob = new DiamondTrap("Lol");
	DiamondTrap diamond("Diamond");
	std::cout << "----------------------------------------" << std::endl;
	std::cout << diamond << std::endl;
	diamond.attack("poo");
	diamond.whoAmI();
//	std::cout << "DiamondTrap _name: " << diamond.getName() << std::endl;
////	std::cout << "ClapTrap _name: " <<  diamond.get<< std::endl;
//	std::cout << "DiamondTrap _hit_points: " << diamond.getHitPoints() << std::endl;
//	std::cout << "DiamondTrap _energy: " << diamond.getEnergy() << std::endl;
//	std::cout << "DiamondTrap _damage: " << diamond._damage << std::endl;
	std::cout << "----------------------------------------" << std::endl;
//	std::cout << diamond.getDamage() << std::endl;
//	FragTrap frag("Frag");
//	bob.attack("Kek");
	return (0);
}
