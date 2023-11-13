#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include "DiamondTrap.hpp"

int	main( void ) {
	DiamondTrap	jolene( "Jolene" );
	std::cout << jolene.getName() << "'s stats" << std::endl;
	std::cout << "Hitpoints: " << jolene.getHitPoints() << std::endl;
	std::cout << "Energy points: " << jolene.getEnergyPoints() << std::endl;
	std::cout << "Attack damage: " << jolene.getAttackDamage() << std::endl;
	std::cout << std::endl;

	FragTrap	orion( "Orion" );
	std::cout << orion.getName() << "'s stats" << std::endl;
	std::cout << "Hitpoints: " << orion.getHitPoints() << std::endl;
	std::cout << "Energy points: " << orion.getEnergyPoints() << std::endl;
	std::cout << "Attack damage: " << orion.getAttackDamage() << std::endl;
	std::cout << std::endl;

	jolene.whoAmI();
	orion.highFivesGuys();
	std::cout << std::endl;

	jolene.guardGate();
	jolene.highFivesGuys();
	std::cout << std::endl;

	jolene.attack( orion.getName() );
	orion.takeDamage( jolene.getAttackDamage() );
	orion.attack( jolene.getName() );
	jolene.takeDamage( orion.getAttackDamage() );
	std::cout << std::endl;

	jolene.attack( orion.getName() );
	orion.takeDamage( jolene.getAttackDamage() );
	jolene.attack( orion.getName() );
	orion.takeDamage( jolene.getAttackDamage() );
	jolene.attack( orion.getName() );
	orion.takeDamage( jolene.getAttackDamage() );
	jolene.attack( orion.getName() );
	orion.takeDamage( jolene.getAttackDamage() );
	std::cout << std::endl;

	return 0;
}
