#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int	main( void ) {
	ScavTrap	jeremiah( "Jeremiah" );
	std::cout << jeremiah.getName() << "'s stats" << std::endl;
	std::cout << "Hitpoints: " << jeremiah.getHitPoints() << std::endl;
	std::cout << "Energy points: " << jeremiah.getEnergyPoints() << std::endl;
	std::cout << "Attack damage: " << jeremiah.getAttackDamage() << std::endl;
	std::cout << std::endl;

	FragTrap	gregory( "Gregory" );
	gregory.setAttackDamage( 42 );
	std::cout << gregory.getName() << "'s stats" << std::endl;
	std::cout << "Hitpoints: " << gregory.getHitPoints() << std::endl;
	std::cout << "Energy points: " << gregory.getEnergyPoints() << std::endl;
	std::cout << "Attack damage: " << gregory.getAttackDamage() << std::endl;
	std::cout << std::endl;

	jeremiah.attack( gregory.getName() );
	gregory.takeDamage( jeremiah.getAttackDamage() );
	std::cout << std::endl;

	gregory.attack( jeremiah.getName() );
	jeremiah.takeDamage( gregory.getAttackDamage() );
	gregory.attack( jeremiah.getName() );
	jeremiah.takeDamage( gregory.getAttackDamage() );
	gregory.attack( jeremiah.getName() );
	jeremiah.takeDamage( gregory.getAttackDamage() );
	gregory.highFivesGuys();
	std::cout << std::endl;

	return 0;
}
