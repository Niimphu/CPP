#include "ScavTrap.hpp"

int	main( void ) {
	ScavTrap	bartholemew( "Bartholemew" );
	std::cout << bartholemew.getName() << "'s stats" << std::endl;
	std::cout << "Hitpoints: " << bartholemew.getHitPoints() << std::endl;
	std::cout << "Energy points: " << bartholemew.getEnergyPoints() << std::endl;
	std::cout << "Attack damage: " << bartholemew.getAttackDamage() << std::endl;
	std::cout << std::endl;

	bartholemew.attack( "Jeremiah");
	bartholemew.guardGate();
	std::cout << std::endl;

	return 0;
}
